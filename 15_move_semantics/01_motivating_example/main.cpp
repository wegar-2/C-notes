#include <iostream>
#include "my_pointer.hpp"

using namespace std;

int main()
{
    // 0. simple test of the MyPointer class
    MyPointer<double> p0 = MyPointer<double>(new double(11.1));
    MyPointer<double> p1;
    p1 = p0;
    // 1.
    return 0;
}
