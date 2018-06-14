#include <iostream>
#include "my_pointer.hpp"

using namespace std;

MyPointer<double> HelperFunction();

int main()
{
    // 0. simple test of the MyPointer class
    MyPointer<double> p0 = MyPointer<double>(new double(11.1));
    MyPointer<double> p1;
    p1 = p0;
    // 1.
    cout << "assiging result of a call to helper function..." << endl;
    MyPointer<double> p2;
    p2 = HelperFunction();
    return 0;
}

MyPointer<double> HelperFunction() {
    cout << "Inside HelperFunction..." << endl;
    MyPointer<double> obj;
    cout << "Just before return in HelperFunction..." << endl;
    return obj;
}

