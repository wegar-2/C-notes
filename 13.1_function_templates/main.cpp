#include <iostream>
#include "TestTemplFun.hpp"

using namespace std;

template <typename T1>
void TestFunctionOne(T1 Arg1);

template <typename T1, typename T2>
T1 AnotherTestFun(T2 arg);

int main()
{
    // 1. simplest example possible
    TestFunctionOne(1.23);
    TestFunctionOne<double>(1);
    // 2. when using a template function included from the header file
    //    it is necessary to remember that the implementation of a template
    //    needs to be put into the header file.
    TestTemplFun<int, double>(123.23);
    // 3.
    AnotherTestFun<int, int>(123);
    AnotherTestFun<int, double>(123.123);
    return 0;
}

template <typename T1>
void TestFunctionOne(T1 Arg1) {
    cout << "InsideTestFunctionOne..." << endl;
    cout << "Arg1 = " << Arg1 << endl;
}

template <typename T1, typename T2>
T1 AnotherTestFun(T2 arg)
{
    cout << "arg: " << arg << endl;
    T1 arg2 = static_cast<T1>(arg);
    cout << "arg2: " << arg2 << endl;
    return 12;
}


