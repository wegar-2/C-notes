#include "Car.hpp"
#include <iostream>

using namespace std;

// default constructor
Car::Car():
    cb(SEDAN),
    MaxSpeed(100)
{
    pSecretValue = new int(100);
    cout << "Non-parametrized constructor of Car class called..." << endl;
}

// parametrized constructor
Car::Car(CarBodyType cb, double MaxSpeed, int SecretValue):
    cb(cb),
    MaxSpeed(MaxSpeed)
{
    this->pSecretValue = new int(SecretValue);
    cout << "Parametrized constructor of Car class called..." << endl;
}

Car::~Car()
{
    cout << "Class Car destructor called..." << endl;
    delete pSecretValue;
    pSecretValue = nullptr; // this assignment is only pro forma
}

Car::Car(const Car& rhs)
{
    cout << "Class Car copy constructor called..." << endl;
    cb = rhs.GetCarBodyType();
}

CarBodyType Car::GetCarBodyType() const
{
    return cb;
}

double Car::GetMaxSpeed() const
{
    return MaxSpeed;
}

int Car::GetSecretValue() const
{
    return *(this->pSecretValue);
}

