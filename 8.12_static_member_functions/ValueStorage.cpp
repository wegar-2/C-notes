#include "ValueStorage.hpp"
#include <iostream>

using namespace std;

// the command below will work!
int ValueStorage::Counter = 0; // this is initialization of the Counter class "Counter" member

ValueStorage::ValueStorage():
    Value(100)
{
    cout << "Class ValueStorage non-parametrized constructor called..." << endl;
    Counter++; // increment the counter
}

ValueStorage::ValueStorage(double Value):
    Value(Value)
{
    cout << "Class ValueStorage parametrized constructor called..." << endl;
    Counter++;
}

ValueStorage::~ValueStorage()
{
    cout << "Class ValueStorage destructor called... " << endl;
}

double ValueStorage::GetValue() const
{
    return Value;
}

int ValueStorage::GetCounter()
{
    return Counter;
}
