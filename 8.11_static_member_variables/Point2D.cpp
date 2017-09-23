#include "Point2D.hpp"
#include <iostream>

using namespace std;

// constructors and destructor implementation
Point2D::Point2D():
    CoordX(1.5),
    CoordY(1.5)
{
    cout << "Non-parametrized class Point2D constructor called..." << endl;
}

Point2D::Point2D(double CoordX, double CoordY):
    CoordX(CoordX),
    CoordY(CoordY)
{
    cout << "Parametrized class Point2D constructor called..." << endl;
}

Point2D::~Point2D()
{
    cout << "Class Point2D destructor called..." << endl;
}

Point2D::Point2D(const Point2D& rhs)
{
    cout << "Class Point2D copy constructor called..." << endl;
    CoordX = rhs.GetCoordX();
    CoordY = rhs.GetCoordY();
}


// getters and setters of the Point2D class
void Point2D::SetCoordX(double CoordX)
{
    this->CoordX = CoordX;
}

void Point2D::SetCoordY(double CoordY)
{
    this->CoordY = CoordY;
}

double Point2D::GetCoordX() const
{
    return CoordX;
}

double Point2D::GetCoordY() const
{
    return CoordY;
}

void Point2D::DisplayCoords() const
{
    cout << "Displaying class Point2D object coordinates: " << endl;
    cout << "CoordX = " << CoordX << endl;
    cout << "CoordY = " << CoordY << endl;
}

// double type member variable cannot be initialized inside the body of the class definition
double Point2D::TestField = 123;
