#include "Cat.hpp"
#include <iostream>

using namespace std;

int Cat::Counter2 = 0; // initialization of a static member variable; here you can access private member variable

Cat::Cat():
    CatWeight(1)
{
    cout << "Class Cat constructor called..." << endl;
    // Counter++; // This WILL NOT work! variable defined as constexpr cannot be changed
    Counter2++;
}

Cat::~Cat()
{
    cout << "Class Cat destructor called..." << endl;
}

int Cat::GetCatsCounter()
{
    return Counter2;
}
