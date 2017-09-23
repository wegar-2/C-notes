#include "TestClass.hpp"
#include <iostream>

using namespace std;

unsigned int TestClass::Counter = 0;

TestClass::TestClass(double Value) {
    cout << "Class TestClass constructor called..." << endl;
    this->Value = Value;
    Counter++;
}

void TestClass::DisplayStatus() const {
    cout << "Class TestClass object status: " << endl;
    cout << "Value = " << Value << endl;
    cout << "Counter of instances of TestClass class: " << Counter << endl;
}
