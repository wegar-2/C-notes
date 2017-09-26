#include <iostream>
#include "Point2D.hpp"

using namespace std;

/*
Operators can be overloaded in the following manners:
1) using friend functions,
2) using normal functions,
3) using member functions.
*/

int main()
{
    // operator overloaded
    Point2D point1 = Point2D(10, 20);
    point1.DisplayCoords();
    Point2D point1_copy;
    point1_copy = (++point1);
    point1.DisplayCoords();
    point1_copy.DisplayCoords();
//    Point2D point2 = ++point1;
/*
    cout << "\n\n\n"<< endl;
    cout << "&point1: " << &point1 << endl;
    cout << "&point2: " << &point2 << endl;
    Point2D point3 = Point2D();
    Point2D point4 = point3++;
    cout << "&point3: " << &point3 << endl;
    cout << "&point4: " << &point4 << endl;
    */
    return 0;
}

