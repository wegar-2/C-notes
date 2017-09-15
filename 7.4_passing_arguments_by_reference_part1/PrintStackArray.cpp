#include <iostream>
#include "PrintStackArray.hpp"

using namespace std;

void PrintStackArray(int ArrayIn[], int LengthArrayIn) {
    cout << "Inside PrintStackArray function... " << endl;
    cout << "ArrayIn = " << ArrayIn << endl;
    cout << "*ArrayIn = " << *ArrayIn << endl;
    for (int i = 0; i < LengthArrayIn; i++) {
        cout << "ArrayIn[" << i << "] = " << ArrayIn[i] << endl;
    }
    cout << "Quitting PrintStackArray function..." << endl;
}
