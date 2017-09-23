#include <iostream>
#include "ValueStorage.hpp"
#include "Cat.hpp"

using namespace std;

int main()
{
    ValueStorage vs1 = ValueStorage(231.23);
    ValueStorage vs2 = ValueStorage(333.1123);
    cout << "vs1.GetCounter() = " << vs1.GetCounter() << endl;
    cout << "vs1.GetValue() = " << vs1.GetValue() << endl;
    cout << "vs2.GetCounter() = " << vs2.GetCounter() << endl;
    cout << "vs2.GetValue() = " << vs2.GetValue() << endl;
    cout << "ValueStorage::GetCounter(): " << ValueStorage::GetCounter() << endl;
    cout << "Cats..." << endl;
    Cat cat1 = Cat();
    cout << "Cat::GetCatsCounter(): " << Cat::GetCatsCounter() << endl;
    Cat cat2 = Cat();
    cout << "Cat::GetCatsCounter(): " << Cat::GetCatsCounter() << endl;
    return 0;
}
