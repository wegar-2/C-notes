#include <iostream>
#include "Point2D.hpp"
#include "TestClass.hpp"

using namespace std;

int main()
{
    // declaring and initializing static class member variables
    Point2D point1 = Point2D();
    cout << "point1.TestField: " << point1.TestField << endl;
    cout << "point1.TestField2: " << point1.TestField2 << endl;
    // using static member variable to count occurrences of a class
    TestClass obj1 = TestClass(1.2);
    TestClass obj2 = TestClass(3323.21);
    obj1.DisplayStatus();
    obj2.DisplayStatus();
    return 0;
}
