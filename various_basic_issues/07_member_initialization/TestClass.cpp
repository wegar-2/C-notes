#include <iostream>
#include "TestClass.hpp"

using namespace std;

TestClass::TestClass() :
    MemberListOne {1, 2, 3},
    px (new int(10)),
    MemberListTwo(new int[5]) {
    cout << "Class TestClass default constructor has been called..."
        << endl;
}

void TestClass::DisplayObject() const {
    cout << "Displaying description of this TestClass object. " << endl;
    cout << "MemberListOne: " << endl;
    for (int k = 0; k < 3; k++) {
        cout << "\tMemberListOne[" << k << "]" <<
        ": " << MemberListOne[k] << endl;
    }
    cout << "px: " << endl;
    for (int k = 0; k < 10; k++) {
        cout << "\tpx[" << k << "]" <<
        ": " << px[k] << endl;
    }
}
