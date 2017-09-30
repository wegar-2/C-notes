#include "TestTemplFun.hpp"
#include <iostream>

using namespace std;

template<typename T1, typename T2>
T1 TestTemplFun(T2 ArgIn)
{
    cout << "Inside TestTemplFun..." << endl;
    cout << "Argument passed to TestTemplFun: " << ArgIn << endl;
    cout << "Quitting TestTemplFun..." << endl;

    return 99;
}

