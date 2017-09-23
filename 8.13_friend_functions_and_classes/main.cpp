#include <iostream>
#include "Car.hpp"

using namespace std;

int main()
{
    Car car1 = Car(HATCHBACK, 123.22, 212);
    DescribeCar(car1);
    return 0;
}
