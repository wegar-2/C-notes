#include <iostream>
#include "Point2D.hpp"

using namespace std;

int main()
{
    Point2D<int, double> point1 = Point2D<int, double>(2, 12.332);
    point1.DisplayCoords();
    cout << "Hello world!" << endl;
    return 0;
}
