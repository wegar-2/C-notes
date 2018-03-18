#include <iostream>
#include "BaseClass.hpp"
#include "DerivedClass.hpp"


using namespace std;

// constructor and destructor
DerivedClass::DerivedClass() :
    BaseClass(),
    AnotherMemberArray(new double[4]),
    LengthOfAnotherMemberArray(new int(4)) {
        cout << "Default constructor of DerivedClass called..." << endl;
    }

DerivedClass::~DerivedClass() {
    cout << "Class DerivedClass destructor has been called..." << endl;
    // note: after exiting this destructor, base class destructor is called immediately
    delete[] AnotherMemberArray;
}

// a virtual method
void DerivedClass::DisplayObject() const {
    cout << "Virtual function DisplayObject of class DerivedClass object has been called..."
        << endl;
    cout << "\tpy = " << py << endl;
    cout << "\t*py = " << *py << endl;
    cout << "Member array:" << endl;
    for (int k = 0; k < *LengthOfAnotherMemberArray; k++) {
        cout << "\tElement " << k << ": " << AnotherMemberArray[k] << endl;
    }

    cout << "Exiting the DisplayObject method..." << endl;
}
