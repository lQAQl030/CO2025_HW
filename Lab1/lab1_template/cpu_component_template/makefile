
1: build1 run1

2: build2 run2

build1:
	verilator -Wall ALU.v alu_test.cpp --cc --trace --exe --build

run1:
	cd obj_dir;\
	./VALU

build2:
	verilator -Wall ALUCtrl.v alu_ctrl_test.cpp --cc --trace --exe --build

run2:
	cd obj_dir;\
	./VALUCtrl

clean:
	rm obj_dir/*
	rmdir obj_dir