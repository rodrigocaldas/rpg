#include <ctest/core.h>

#include "test_basic.h"

// Ponto de entrada dos testes
int main() {
    struct CTest_TestSuite* suite = CTest_Init();
    CTest_SetMode(suite, TEXT);
    CTest_Add(suite, test_myfunc, "test_myfunc");
    CTest_TestSuite_Run(suite);
    return 0;
}
