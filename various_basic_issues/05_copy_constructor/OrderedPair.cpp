#include <iostream>
#include "OrderedPair.hpp"

using namespace std;


// constructors and destructor

OrderedPair::OrderedPair() {
    pFirstElem = new int(1);
    pSecondElem = new int(11);
}

OrderedPair::OrderedPair(int x, int y) {
    pFirstElem = new int(x);
    pSecondElem = new int(y);
}

OrderedPair::OrderedPair(const OrderedPair& rhs) {
    cout << "Class OrderedPair copy constructor is executing..." << endl;
    pFirstElem = new int(*(rhs.pFirstElem));
    pSecondElem = new int(*(rhs.pSecondElem));
}

OrderedPair::~OrderedPair() {
    cout << "Class OrderedPair destructor called..." << endl;
    delete pFirstElem;
    delete pSecondElem;
}


// other class OrderedPair methods

int OrderedPair::GetFirstElem() {
    return *pFirstElem;
}

int OrderedPair::GetSecondElem() {
    return *pSecondElem;
}

void OrderedPair::SetFirstElem(int val) {
    *pFirstElem = val;
}

void OrderedPair::SetSecondElem(int val) {
    *pSecondElem = val;
}

void OrderedPair::DisplayElems() {
    cout << "Displaying description of this OrderedPair class object: " << endl;
    cout << "\tpFirstElem = " << pFirstElem << endl;
    cout << "\t*pFirstElem = " << *pFirstElem << endl;
    cout << "\tpSecondElem = " << pSecondElem << endl;
    cout << "\t*pSecondElem = " << *pSecondElem << endl;
}
