#include <iostream>
#include "TestTemplFun.hpp"

using namespace std;

template <typename T1>
void TestFunctionOne(T1 Arg1);


int main()
{
    // 1. simplest example possible
    TestFunctionOne(1.23);
    TestFunctionOne<double>(1);
    // 2.
    TestTemplFun<int, double>(123.23);
    // 3.

    return 0;
}

template <typename T1>
void TestFunctionOne(T1 Arg1) {
    cout << "InsideTestFunctionOne..." << endl;
    cout << "Arg1 = " << Arg1 << endl;
}
