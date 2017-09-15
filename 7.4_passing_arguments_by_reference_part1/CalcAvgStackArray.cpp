#include <iostream>
#include "CalcAvgStackArray.hpp"

using namespace std;

void CalcAvgStackArray(int* ArrayIn, int LengthArrayIn) {
    cout << "Inside function CalcAvgStackArray..." << endl;
    int sum = 0;
    for (int i = 0; i < LengthArrayIn; i++) {
        sum += ArrayIn[i];
    }
    double avg = static_cast<double>(sum)/static_cast<double>(LengthArrayIn);
    cout << "Calculated average: " << avg << endl;
    cout << "Quitting function CalcAvgStackArray..." << endl;
}
