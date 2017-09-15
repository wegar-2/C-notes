#include <iostream>
#include "PrintHeapArray.hpp"

using namespace std;

void PrintHeapArray(double* ArrayIn, int LengthArrayIn) {
    cout << "Inside PrintHeapArray function... " << endl;
    cout << "ArrayIn = " << ArrayIn << endl;
    cout << "*ArrayIn = " << ArrayIn << endl;
    for (int i = 0; i < LengthArrayIn; i++) {
        cout << "value: ArrayIn[" << i << "] = " << ArrayIn[i] << endl;
        cout << "address: &ArrayIn[" << i << "] = " << &ArrayIn[i] << endl;
    }
    cout << "Quitting PrintHeapArray function..." << endl;
}
