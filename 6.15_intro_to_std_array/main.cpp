#include <iostream>
#include <array> // include the array header to be able to use the std::array class
#include <algorithm>

using namespace std;

// declaration of a function that accepts array as an input
void TestFunction1(array<double, 5> ArrayIn);

// however, it is much better to pass by reference
void TestFunction2(array<double, 10>& rArrayIn);

void TestFunction3(array<double, 6>& rArrayIn);

int main()
{
    cout << "Preparing an array... " << endl;
    array<double, 5> array1 = {1.2, 3.2, 545.2, 100, 1000.21};
    TestFunction1(array1);
    array<double, 10> array2 = {10, 9, 8, 7, 6, 1, 2, 4, 3, 5};
    TestFunction2(array2);
    cout << "\n\n\nUsing the sort function from 'algorithm' header" << endl;
    array<double, 6> array3 = {1, 6, 2, 7, 1, 2};
    TestFunction3(array3); // printing the elements of array3
    sort(array3.begin(), array3.end());
    TestFunction3(array3); // printing the elements of array3 after the sorting
    return 0;
}

void TestFunction1(array<double, 5> ArrayIn) {
    int n = ArrayIn.size();
    // length of array can be accessed from inside of the TestFunction1
    cout << "The length of the ArrayIn passed to the TestFunction1 is: " << n << endl;
    for (int i = 0; i < n; i++) {
        cout << "ArrayIn[" << i << "] = " << ArrayIn[i] << endl;
    }
    cout << "Quitting TestFunction1..." << endl;
}

void TestFunction2(array<double, 10>& rArrayIn) {
    int n = rArrayIn.size();
    // length of array can be accessed from inside of the TestFunction1
    cout << "The length of the ArrayIn passed to the TestFunction2 is: " << n << endl;
    for (int i = 0; i < n; i++) {
        cout << "ArrayIn[" << i << "] = " << rArrayIn[i] << endl;
    }
    cout << "Quitting TestFunction2..." << endl;
}

void TestFunction3(array<double, 6>& rArrayIn) {
    cout << "\n\nInside function TestFunction3..." << endl;
    for (int i = 0; i < rArrayIn.size(); i++) {
        cout << "ArrayIn" << "[" << i << "] = " << rArrayIn[i] << endl;
    }
    cout << "\n\nQuitting function TestFunction3..." << endl;
}
