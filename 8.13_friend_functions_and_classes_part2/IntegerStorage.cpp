#include "IntegerStorage.hpp"
#include <iostream>

IntegerStorage::IntegerStorage()
{
    cout << "Class IntegerStorage constructor called..." << endl;
    pIntValue = new int(1);
}

IntegerStorage::~IntegerStorage()
{
    cout << "Class IntegerStorage destructor called..." << endl;
    delete pIntValue;
    pIntValue = nullptr;
}
