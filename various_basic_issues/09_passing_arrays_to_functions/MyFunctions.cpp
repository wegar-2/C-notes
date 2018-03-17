#include "MyFunctions.hpp"
#include <iostream>

using namespace std;

void MyFirstFunction(int ArrayOfInts[3]) {
    cout << "Inside MyFirstFunction..." << endl;
    for (int k = 0; k < 3; k++) {
        cout << "\t" << k << ": " << ArrayOfInts[k] << endl;
    }
}

void MySecondFunction(int ArrayOfInts[], int ArrayLength) {
    cout << "Inside MySecondFunction..." << endl;
    for (int k = 0; k < ArrayLength; k++) {
        cout << "\t" << k << ": " << ArrayOfInts[k] << endl;
    }
}
