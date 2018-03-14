#include <iostream>

using namespace std;

// forward declarations
void simple_swap(int* px, int* py);

void another_swap(int& rx, int& ry);

int main()
{
    // 1. simplest pointer possible
    int x;
    int* px;
    px = &x;
    cout << "x: " << x << endl;
    cout << "&x: " << &x << endl;
    cout << "px: " << px << endl;
    cout << "*px: " << *px << endl;
    cout << "\n\n\n";

    // 2. testing simple_swap function
    int a = 232;
    int b = 1002;
    cout << "Before call to simple_swap... " << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    simple_swap(&a, &b);
    cout << "After call to simple_swap..." << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "\n\n\n";

    // 3. testing another_swap
    a = 101;
    b = 10101;
    cout << "Before call to another_swap... " << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    another_swap(a, b);
    cout << "After call to another_swap..." << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "\n\n\n";

    return 0;
}


// implementations of functions
void simple_swap(int* px, int* py) {
    cout << "Function simple_swap called..." << endl;
    int temp = *px;
    *px = *py;
    *py = temp;
}

void another_swap(int& rx, int& ry) {
    cout << "Function another_swap called..." << endl;
    int temp = rx;
    rx = ry;
    ry = temp;
}

