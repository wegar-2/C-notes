#include <iostream>
#include "DescribeCarAndOwner.hpp"

#include "Car.hpp"
#include "Person.hpp"

using namespace std;

void DescribeCarAndOwner(const Car& rCar, const Person& rPerson)
{
    cout << "\n\n\nInside the DescribeCarAndOwner function..." << endl;
    cout << "Describing the Car: " << endl;
    cout << "Body type: " << rCar.cb << endl;
    cout << "MaxSpeed: " << rCar.MaxSpeed << endl;
    cout << "Secret value: " << *(rCar.pSecretValue) << endl;
    cout << "Describing the Owner: " << endl;
    cout << "Name: " << *(rPerson.pName) << endl;
    cout << "Surname: " << *(rPerson.pSurname) << endl;
    cout << "Age: " << *(rPerson.pAge) << endl;
    cout << "\n\n\nQuitting the DescribeCarAndOwner function..." << endl;
}

