#include <iostream>
#include "OrderedPair.hpp"

using namespace std;

int main()
{
    // 1. array on stack
    int myarray[4] = {43, 1, 2, 3};
    cout << "-----------------------------------" << endl;
    cout << "------- Array on the stack --------" << endl;
    cout << "-----------------------------------" << endl;
    cout << "myarray: " << myarray << endl;
    cout << "&myarray: " << &myarray << endl;
    cout << "*myarray: " << *myarray << endl;
    cout << "myarray[0]: " << myarray[0] << endl;
    cout << "myarray[2]: " << myarray[2] << endl;
    cout << "&myarray[2]: " << &myarray[2] << endl;
    cout << "sizeof(myarray): " << sizeof(myarray) << endl;
    cout << "sizeof(myarray[0]): " << sizeof(myarray[0]) << endl;
    cout << "Implied number of elements of myarray: " <<
            sizeof(myarray)/sizeof(myarray[0]) << endl;
    cout << "\n\n\n" << endl;

    // 2. array in the heap
    cout << "----------------------------------------------" << endl;
    cout << "------------- Array in the heap --------------" << endl;
    cout << "----------------------------------------------" << endl;
    int* pHeapArray = new int[5];
    pHeapArray[0] = 1;
    pHeapArray[1] = 11;
    pHeapArray[2] = 111;
    pHeapArray[3] = 1111;
    pHeapArray[4] = 11111;
    cout << "pHeapArray: " << pHeapArray << endl;
    cout << "*pHeapArray: " << *pHeapArray << endl;
    cout << "pHeapArray[0]: " << pHeapArray[0] << endl;
    cout << "&pHeapArray[0]: " << &pHeapArray[0] << endl;
    cout << "&pHeapArray: " << &pHeapArray << endl;
    cout << "sizeof(pHeapArray): " << sizeof(pHeapArray) << endl;
    cout << "&pHeapArray[2]: " << &pHeapArray[2] << endl;
    cout << "pHeapArray[2]: " << pHeapArray[2] << endl;
    int z = 123;
    int* pz = &z;
    cout << "sizeof(pz): " << sizeof(pz) << endl;

    // 3. array of pointers
    cout << "------------------------------------------------------" << endl;
    cout << "----------------- Arrays of pointers -----------------" << endl;
    cout << "------------------------------------------------------" << endl;
    int* ArrayOfPointers[30];
    cout << "Creating an array of pointers... " << endl;
    for (int k = 0; k < 30; k++) {
        ArrayOfPointers[k] = new int(k+1);
    }
    cout << "Displaying an array of pointers... " << endl;
    for (int k = 0; k < 30; k++) {
        cout << "\tArrayOfPointers[" << k << "] = " << ArrayOfPointers[k] << endl;
        cout << "\t*ArrayOfPointers[" << k << "] = " << *ArrayOfPointers[k] << endl;
    }

    /* ******* 4. array of objects of user-defined class ******* */

    // 4.1. array in the stack
    OrderedPair array_of_pairs[3];
    array_of_pairs[0] = OrderedPair();
    OrderedPair myobj = OrderedPair();
    OrderedPair myobj2 = OrderedPair(1);
    // array_of_pairs[1] = OrderedPair(1);
    //array_of_pairs[2] = OrderedPair(2, 3);

    // 4.2. array of OrderedPair objects in the heap

    // 4.3. array of pointers

    return 0;
}
