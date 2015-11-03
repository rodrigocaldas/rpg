#include "test_basic.h"

void test_myfunc(struct CTest_Test* test) {
	int meaningOfLife = 6 * 7;
	if (meaningOfLife != 42)
		CTest_Test_Fail(test, "The meaning of life should be 42");
	else
		CTest_Test_Success(test);
}
