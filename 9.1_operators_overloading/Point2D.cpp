#include "Point2D.hpp"
#include <iostream>

using namespace std;

// initializing the static member variable
// int Point2D::PointsCounter = 0;

Point2D::Point2D()
{
    cout << "\n\n" << endl;
    cout << "Class Point2D non-parametrized constructor called..." << endl;
    pCoordX = new double(1.0);
    pCoordY = new double(2.0);
    //pPointID = new int(++PointsCounter);
    //cout << "Id of the current point: " << *pPointID << endl;
}

Point2D::Point2D(double CoordX, double CoordY)
{
    cout << "\n\n" << endl;
    cout << "Class Point2D parametrized constructor called..." << endl;
    this->pCoordX = new double(CoordX);
    this->pCoordY = new double(CoordY);
    //pPointID = new int(++PointsCounter);
  //  cout << "Id of the current point: " << PointsCounter << endl;
}

Point2D::~Point2D()
{
    cout << "Class Point2D destructor called..." << endl;
    // deallocate memory to the heap
    delete pCoordX;
    pCoordX = nullptr;
    delete pCoordY;
    pCoordY = nullptr;
    //delete pPointID;
    //pPointID = nullptr;
}

Point2D::Point2D(const Point2D& rhs)
{
    cout << "Class Point2D copy constructor called..." << endl;
    cout << "\t*(rhs.pCoordX):" << *(rhs.pCoordX) << endl;
    pCoordX = new double(*(rhs.pCoordX));
    cout << "\t*(rhs.pCoordY):" << *(rhs.pCoordY) << endl;
    pCoordY = new double(*(rhs.pCoordY));
    //pPointID = new int(*(rhs.pPointID)+1);
    // PointsCounter++;
}

/* When void type is returned the results cannot be used
e.g. in an assignment. */
/* void Point2D::operator++()
{
    // incrementing every coordinate by 1
    (*CoordX) += 1;
    (*CoordY) += 1;
} */

// pre-incrementation
Point2D Point2D::operator++()
{
    cout << "Inside pre-incrementation operator" << endl;
    (*pCoordX) += 1;
    (*pCoordY) += 1;
    return *this;
}

// post-incrementation
Point2D& Point2D::operator++(int postOper)
{
    (*pCoordX) += 1;
    (*pCoordY) += 1;
    return *this;
}

void Point2D::DisplayCoords() const
{
    //cout << "\n\nDisplaying coordinates of a point with ID: " << *pPointID << endl;
    cout << "CoordX: " << *pCoordX << endl;
    cout << "CoordY: " << *pCoordY << endl;
}
