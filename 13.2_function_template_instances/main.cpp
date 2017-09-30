#include <iostream>
#include "Storage.hpp"

using namespace std;

template <typename T1>
void TestFunction(T1 ArgIn);

template <typename T>
T CalcAverage(T* ArrayIn, int Length);

int main()
{
    // 0. test class Storage
    Storage st1 = Storage(3);
    st1.SetElement(0, 3);
    st1.SetElement(1, 23);
    st1.SetElement(2, 2333);
    st1.DisplayElements();
    // 1. passing user-defined class to function template
    TestFunction<Storage>(st1);
    // 2. Another example
    int IntArray[] = {1, 3, 7};
    double DoubleArray[] = {12.323, 10.33, 656.43, 213.2323};
    cout << "CalcAverage<int>(IntArray): " << CalcAverage<int>(IntArray, 3) << endl;
    cout << "CalcAverage<double>(DoubleArray):" << CalcAverage<double>(DoubleArray, 4) << endl;
    return 0;
}

template <typename T1>
void TestFunction(T1 ArgIn)
{
    cout << "Inside TestFunction..." << endl;
    cout << "ArgIn.Size() = " << ArgIn.GetSize() << endl;
}

template <typename T>
T CalcAverage(T* ArrayIn, int Length)
{
    T res = 0;
    for (int i = 0; i < Length; i++) {
        res += ArrayIn[i];
    }
    res /= Length;
    return res;
}
