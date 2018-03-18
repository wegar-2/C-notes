#include <iostream>
#include "BaseClass.hpp"

using namespace std;

// constructors and destructor
BaseClass::BaseClass():
    px(new int(1)), py(new int(2)) {
        cout << "Class BaseClass default constructor has been called..." << endl;
    }

BaseClass::BaseClass(int x, int y) :
    px (new int(x)), py (new int (y)) {
        cout << "Class BaseClass parametrized constructor has been called..." << endl;
    }

BaseClass::~BaseClass() {
    cout << "Class BaseClass destructor called..." << endl;
    delete px;
    delete py;
}

// other methods
void BaseClass::SetX(int x) {
    *px = x;
}

void BaseClass::SetY(int y) {
    *py = y;
}

int BaseClass::GetX() const {
    return *px;
}

int BaseClass::GetY() const {
    return *py;
}

void BaseClass::DisplayObject() const {
    cout << "Describing a class BaseClass object: " << endl;
    cout << "\tpx = " << px << endl;
    cout << "\t*px = " << *px << endl;
    cout << "\tpy = " << py << endl;
    cout << "\t*py = " << *py << endl;
}
