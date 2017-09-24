#ifndef CAR_HPP
#define CAR_HPP

// include definition of enumerated type (enumeration) CarBodyTypes
#include "CarBodyType.hpp"
// #include "Person.hpp"

// declaration is necessary to define the friend function with multiple friends
class Person;

class Car {
private:
    CarBodyType cb;
    double MaxSpeed;
    int* pSecretValue;
    // class Car friend function
    friend void DescribeCar(const Car& rCar);
    // friend function that has multiple friends
    friend void DescribeCarAndOwner(const Car& rCar, const Person& rPerson);

public:
    Car();
    Car(CarBodyType cb, double MaxSpeed, int SecretValue);
    ~Car();
    Car(const Car& rhs);
    // getters of the fields
    CarBodyType GetCarBodyType() const;
    double GetMaxSpeed() const;
    int GetSecretValue() const;
};

#endif // CAR_HPP
