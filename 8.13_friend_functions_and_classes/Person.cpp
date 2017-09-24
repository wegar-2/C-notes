#include "Person.hpp"
#include <iostream>


using namespace std;

Person::Person()
{
    cout << "Class Person non-parametrized constructor called..." << endl;
    pName = new std::string("undefined");
    pSurname = new std::string("undefined");
    pAge = new int(0);
}

Person::Person(std::string Name, std::string Surname, int Age)
{
    cout << "Class Person non-parametrized constructor called..." << endl;
    pName = new std::string(Name);
    pSurname = new std::string(Surname);
    pAge = new int(Age);
}

Person::~Person()
{
    cout << "Class Person destructor called..." << endl;
    delete pName;
    pName = nullptr;
    delete pSurname;
    pSurname = nullptr;
    delete pAge;
    pAge = nullptr;
}

Person::Person(const Person& rhs)
{
    cout << "Class Person copy constructor called..." << endl;
    pName = new std::string(rhs.GetName());
    pSurname = new std::string(rhs.GetSurname());
    pAge = new int(rhs.GetAge());
}

std::string Person::GetName() const
{
    return *pName;
}

std::string Person::GetSurname() const
{
    return *pSurname;
}

int Person::GetAge() const
{
    return *pAge;
}
