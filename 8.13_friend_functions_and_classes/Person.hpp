#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>

class Car; // declaring a class to be able to define the friend function with multiple friends in the class

class Person {
private:
    // store the elements on the heap to make life harder
    std::string* pName;
    std::string* pSurname;
    int* pAge;

    friend void DescribeCarAndOwner(const Car& rCar, const Person& rPerson);

public:
    Person();
    Person(std::string Name, std::string Surname, int Age);
    ~Person();
    Person(const Person& rhs);
    // getter methods
    std::string GetName() const;
    std::string GetSurname() const;
    int GetAge() const;
};

#endif // PERSON_HPP
