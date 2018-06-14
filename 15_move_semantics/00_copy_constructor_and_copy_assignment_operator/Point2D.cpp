#include <iostream>
#include "Point2D.hpp"

using namespace std;

Point2D::Point2D(double val) {
    cout << "Class Point2D constructor called..." << endl;
    X = val;
    Y = val;
}

Point2D::~Point2D() {
    cout << "Class Point2D destructor called... " << endl;
}


Point2D::Point2D(const Point2D& rhs) {
    cout << "Class Point2D copy constructor called..." << endl;
    X = rhs.X;
    Y = rhs.Y;
}

Point2D& Point2D::operator=(const Point2D& rhs) {
    cout << "Class Point2D copy assignment operator called..." << endl;
    X = rhs.X;
    Y = rhs.Y;
    return *this;
}
