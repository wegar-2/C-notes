#include "DescribeCar.hpp"
#include <iostream>

using namespace std;

void DescribeCar(const Car& rCar)
{
    cout << "\n\n\nDescribeCar() function called..." << endl;
    cout << "\tBody type: " << rCar.cb << endl;
    cout << "\tMaxSpeed: " << rCar.MaxSpeed << endl;
    cout << "\tpSecretValue: " << rCar.pSecretValue << endl;
    cout << "\t*pSecretValue: " << *(rCar.pSecretValue) << endl;
}

