#include <iostream>
#include "Car.hpp"
#include "Person.hpp"

using namespace std;

int main()
{
    Car car1 = Car(HATCHBACK, 123.22, 212);
    DescribeCar(car1);
    Person person1 = Person("John", "Smith", 40);
    cout << "Calling function DescribeCarAndOwner: " << endl;
    DescribeCarAndOwner(car1, person1);
    return 0;
}
