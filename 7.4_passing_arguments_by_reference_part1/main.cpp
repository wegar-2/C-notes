#include <iostream>
#include <cmath>

#include "PrintStackArray.hpp"
#include "CalcAvgStackArray.hpp"
#include "PrintPointersArray.hpp"
#include "CalcAveragePointersArray.hpp"
#include "PrintHeapArray.hpp"
#include "CalcAvgHeapArray.hpp"

using namespace std;

double GenQuasiUnif();

int main()
{
    /* *********************************** */
    /* 1. Passing stack arrays to function */
    /* *********************************** */
    int Array1[5] {1, 2, 1, 4, 1};
    int LengthArray1 = sizeof(Array1)/sizeof(Array1[0]);
    cout << "Check that Array1 decays to pointer to first array element when called: " << endl;
    cout << "&Array1[0] = " << &Array1[0] << endl;
    cout << "Array1 = " << Array1 << endl;
    cout << "\nPassing Array1 to PrintStackArray...\n" << endl;
    PrintStackArray(Array1, LengthArray1);
    CalcAvgStackArray(Array1, LengthArray1);
    cout << "\n\n\n" << endl;


    /* ******************************************* */
    /* 2. Passing arrays of pointers to a function */
    /* ******************************************* */
    cout << "Creating array of pointers to doubles Array2..." << endl;
    double* Array2[1000]; // array of pointers

    // create objects and assign addresses to elements of Array2
    for (int i = 0; i < 1000; i++) {
        Array2[i] = new double(GenQuasiUnif());
    }

    int LengthArray2 = sizeof(Array2)/sizeof(Array2[0]);
    PrintPointersArray(Array2, LengthArray2);
    cout << "\n\n\n" << endl;
    CalcAvgPointersArray(Array2, LengthArray2);

    // remember to deallocate memory
    for (int i = 0; i < 1000; i++) {
        delete Array2[i];
        Array2[i] = nullptr;
    }
    cout << "\n\n\n" << endl;

    /* ************************************ */
    /* 3. Passing array on heap to function */
    /* ************************************ */
    double* Array3 = new double[1000];
    // assign values to elements of Array3
    for(int i = 0; i < 1000; i++) {
        Array3[i] = GenQuasiUnif();
    }

    int LengthArray3 = 1000; // noe convenient way to calculate length of the heap array
    PrintHeapArray(Array3, LengthArray3);
    cout << "\n\n\n" << endl;
    CalcAvgHeapArray(Array3, LengthArray3);

    // deallocate memory
    delete[] Array3;

    return 0;
}


double GenQuasiUnif() {
    return (static_cast<double>(rand())/static_cast<double>(RAND_MAX));
}





