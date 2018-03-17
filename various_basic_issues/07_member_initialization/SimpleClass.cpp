#include <iostream>
#include "SimpleClass.hpp"

using namespace std;


// constructors and destructor

SimpleClass::SimpleClass() :
    StackMember(1), pHeapMember(new int(666)) {
    }

SimpleClass::SimpleClass(int x, int y) :
    StackMember(x), pHeapMember(new int(y)) {
    }

SimpleClass::SimpleClass(int x, int* py) :
    StackMember(x), pHeapMember(py) {
    cout << "Constructor accepting int and pointer to int as its arguments has been called..."
    << endl;
}

SimpleClass::~SimpleClass() {
    cout << "Class SimpleClass destructor called..." << endl;
    delete pHeapMember;
}

SimpleClass::SimpleClass(const SimpleClass& rhs) :
    pHeapMember(new int(*(rhs.pHeapMember))) {
    cout << "Class SimpleClass copy constructor has been called..." << endl;
    StackMember = rhs.StackMember;
}


// other methods

void SimpleClass::SetStackMember(int x) {
    StackMember = x;
}

void SimpleClass::SetHeapMember(int x) {
    *pHeapMember = x;
}

int SimpleClass::GetStackMember() const {
    return StackMember;
}

int SimpleClass::GetHeapMember() const {
    return *pHeapMember;
}

void SimpleClass::DescribeThisObject() const {
    cout << "Describing a class SimpleClass object..." << endl;
    cout << "\tStackMember = " << StackMember << endl;
    cout << "\t*pHeapMember =" << *pHeapMember << endl;
    cout << "\tpHeapMember =" << pHeapMember << endl;
}
