#include <iostream>
#include "OrderedPair.hpp"

using namespace std;

// constructors and destructor
OrderedPair::OrderedPair() {
    cout << "Class OrderedPair non-parametrized constructor called..." << endl;
    pFirst = new int(0);
    pSecond = new int(1);
}

OrderedPair::OrderedPair(int x) {
    cout << "Class OrderedPair one-parameter constructor called..." << endl;
    pFirst = new int(x);
    pSecond = new int(x);
}

OrderedPair::OrderedPair(int x, int y) {
    cout << "Class OrderedPair two-parameters constructor called..." << endl;
    pFirst = new int(x);
    pSecond = new int(y);
}
/*
OrderedPair::OrderedPair(OrderedPair& rhs) {
    cout << "Class OrderedPair copy constructor called..." << endl;
    pFirst = new int(*(rhs.pFirst));
    pSecond = new int(*(rhs.pSecond));
}
*/
OrderedPair::~OrderedPair() {
    cout << "Class OrderedPair destructor is executing..." << endl;
    delete pFirst;
    delete pSecond;
}


// other class methods
int OrderedPair::GetFirstElement() {
    return *pFirst;
}

int OrderedPair::GetSecondElement() {
    return *pSecond;
}

void OrderedPair::SetFirstElement(int x) {
    *pFirst = x;
}

void OrderedPair::SetSecondElement(int y) {
    *pFirst = y;
}

void OrderedPair::DisplayPair() {
    cout << "Displaying an ordered pair: " << endl;
    cout << "\tFirst of pair: " << *pFirst << endl;
    cout << "\tSecond of pair: " << *pSecond << endl;
}
