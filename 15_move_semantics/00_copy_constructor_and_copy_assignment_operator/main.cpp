#include <iostream>
#include "Point2D.hpp"

using namespace std;

int main()
{
    cout << "obj1" << endl;
    Point2D obj1;
    cout << "obj2" << endl;
    Point2D obj2(11.0);
    cout << "obj3" << endl;
    Point2D obj3 = Point2D(123.3);
    cout << "assigning obj3 to obj1" << endl;
    obj1 = obj3;
    cout << endl << endl << endl;
    cout << "yet another case: " << endl;
    Point2D* obj4 = new Point2D(obj3); // this calls a copy constructor
    cout << "also, let's see what happens here: " << endl;
    *obj4 = Point2D(obj2); // first copy constructor and assignment operator are called here
    return 0;
}
