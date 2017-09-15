#include <iostream>
#include "CalcAveragePointersArray.hpp"

using namespace std;

void CalcAvgPointersArray(double** ArrayIn, int LengthArrayIn) {
    cout << "Inside function CalcAvgPointersArray..." << endl;
    double sum = 0;
    for (int i = 0; i < LengthArrayIn; i++) {
        sum += *ArrayIn[i];
    }
    double avg = sum/static_cast<double>(LengthArrayIn);
    cout << "Calculated average: " << avg << endl;
    cout << "Quitting function CalcAvgPointersArray..." << endl;
}
