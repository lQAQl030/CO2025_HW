#include "CacheManager.h"
#include <math.h>

CacheManager::CacheManager(Memory *memory, Cache *cache){
    // TODO: implement your constructor here
    // TODO: set tag_bits accord to your design.
    // Hint: you can access cache size by cache->get_size();
    // Hint: you need to call cache->set_block_size();
    this->memory = memory;
    this->cache = cache;
    size = cache->get_size();
    cache->set_block_size(4);

    // 32 ways, 8 sets
    ways = 32;
    sets = cache->get_len() / ways; // 8 sets
    tag_bits = 32 - log2(sets) - 2;

    // LRU init
    lru = 0;
    LRU.resize(sets * ways, 0);
};

CacheManager::~CacheManager(){

};

std::pair<unsigned, unsigned> CacheManager::set_associative(unsigned int addr){
    unsigned int index_bit = int(log2(sets));
    unsigned int index = (addr >> 2) % sets; 
    unsigned int tag = addr >> index_bit >> 2;
    return {index, tag};
}

unsigned int* CacheManager::find(unsigned int addr){
    // TODO:: implement function determined addr is in cache or not
    // if addr is in cache, return target pointer, otherwise return nullptr.
    // you shouldn't access memory in this function.
    auto [index, tag] = set_associative(addr);

    // search each way
    for(unsigned int way = 0 ; way < ways ; way++){
        if((*cache)[index * ways + way].tag == tag){
            LRU[index * ways + way] = lru++;
            return &((*cache)[index * ways + way][0]);
        }
    }

    return nullptr;
}

unsigned int CacheManager::read(unsigned int addr){
    // TODO:: implement replacement policy and return value 
    unsigned int* value_ptr = find(addr);
    if(value_ptr != nullptr)
        return *value_ptr;
    else{
        // not in cache
        auto [index, tag] = set_associative(addr);

        // find LRU
        unsigned int target_way = 0;
        for(unsigned int way = 1 ; way < ways ; way++){
            if(LRU[index * ways + way] < LRU[index * ways + target_way]){
                target_way = way;
            }
        }
        LRU[index * ways + target_way] = lru++;
        
        // kick it
        (*cache)[index * ways + target_way].tag = tag;
        return (*cache)[index * ways + target_way][0] = memory->read(addr);
    }
};

void CacheManager::write(unsigned int addr, unsigned value){
    // TODO:: write value to addr
    auto [index, tag] = set_associative(addr);

    // search each way
    for(unsigned int way = 0 ; way < ways ; way++){
        if((*cache)[index * ways + way].tag == tag){
            (*cache)[index * ways + way][0] = value;
            LRU[index * ways + way] = lru++;
            memory->write(addr, value);
            return;
        }
    }

    // find LRU
    unsigned int target_way = 0;
    for(unsigned int way = 1 ; way < ways ; way++){
        if(LRU[index * ways + way] < LRU[index * ways + target_way]){
            target_way = way;
        }
    }
    LRU[index * ways + target_way] = lru++;

    // kick it
    (*cache)[index * ways + target_way].tag = tag;
    (*cache)[index * ways + target_way][0] = value;
    memory->write(addr, value);
};