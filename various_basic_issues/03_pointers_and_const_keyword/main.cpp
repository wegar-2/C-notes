#include <iostream>

using namespace std;

int main()
{
    // 1. constant pointer to a value
    int x = 301;
    int y = 900;
    int* const px = &x;;
    cout << "x = " << x << endl;
    cout << "&x = " << &x << endl;
    cout << "px = " << px << endl;
    cout << "*px = " << *px << endl;
    cout << "px is a pointer to a fixed location" << endl;
    // the line below would not compile
    // px = &y;
    cout << "Changing value of x..." << endl;
    x = 100;
    cout << "x = " << x << endl;
    cout << "*px = " << *px << endl;
    cout << "\n\n\n" << endl;

    // 2. pointer to a constant value
    int z = 10101;
    const int* pz = &z;
    z = 10; // O.K. the variable x can be changed this way
    cout << "z = " << z << endl;
    cout << "&z = " << &z << endl;
    cout << "pz = " << pz << endl;
    cout << "*pz = " << *pz << endl;
    // *pz = 1001 // wrong, the pointer sees the value it points at as a constant
    cout << "\n\n\n" << endl;

    // 3. constant pointer to a constant value
    int m = 123;
    const int* const pm = &m;
    // *pm = 111; // won't work
    int n = 12333;
    // pm = &n; // won't work


    return 0;
}
