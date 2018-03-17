#include <iostream>
#include "MyFunctions.hpp"

using namespace std;

int main()
{
    // 1. passing simple stack array
    int StackArrayOfInts[3] = {2, 3, 5};
    MyFirstFunction(StackArrayOfInts);
    int StackArrayOfInts2[6] = {1, 4, 2, 10, 12, 1};
    int CalctdArLen = sizeof(StackArrayOfInts2)/sizeof(StackArrayOfInts2[0]);
    MySecondFunction(StackArrayOfInts2, CalctdArLen);
    return 0;
}
