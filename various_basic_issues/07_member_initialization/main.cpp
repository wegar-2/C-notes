#include <iostream>
#include "SimpleClass.hpp"
#include "TestClass.hpp"

using namespace std;

int main()
{
    SimpleClass scObj1 = SimpleClass();
    cout << "scObj1: " << endl;
    scObj1.DescribeThisObject();
    SimpleClass scObj2 = SimpleClass(23, 91);
    cout << endl;
    cout << "scObj2: " << endl;
    scObj2.DescribeThisObject();
    int *pz = new int(132);
    SimpleClass scObj3 = SimpleClass(323, pz);
    cout << endl;
    cout << "scObj3: " << endl;
    scObj3.DescribeThisObject();
    cout << "\n\n\n\n" << endl;

    TestClass tc1 = TestClass();
    tc1.DisplayObject();

    return 0;
}
