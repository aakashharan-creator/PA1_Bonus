set: 
	cd testing; cd build; make

evaluate:
	cd testing; cd build; ./infix_test --gtest_fail_fast
	