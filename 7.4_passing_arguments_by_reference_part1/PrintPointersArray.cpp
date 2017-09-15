#include "PrintPointersArray.hpp"
#include <iostream>

using namespace std;

// note: what is passed to PrintPointersArray is a pointer to array of pointers
void PrintPointersArray(double** ArrayIn, int LengthArrayIn) {
    cout << "ArrayIn should evaluate to pointer to first element of pointers array... " << endl;
    cout << "ArrayIn = " << ArrayIn << endl;
    cout << "*ArrayIn should therefore evaluate to the value stored in the first " << endl;
    cout << "element of the array of pointers, namely the address to the first element " << endl;
    cout << "that is stored on heap: " << endl;
    cout << *ArrayIn << endl;
    cout << "Value pointed at by the pointer above: " << endl;
    cout << **ArrayIn << endl;
    for (int i = 0; i < LengthArrayIn; i++) {
        cout << "value: *ArrayIn[" << i << "] = " << *ArrayIn[i] << endl;
        cout << "address: ArrayIn[" << i << "] = " << ArrayIn[i] << endl;
    }
}
