#include "Point2D.hpp"
#include <iostream>


/* constructors, destructor and assignment operator */

Point2D::Point2D()
{
    std::cout << "\n\n" << std::endl;
    std::cout << "Class Point2D non-parametrized constructor called..." << std::endl;
    pCoordX = new double(1.0);
    pCoordY = new double(2.0);
    //pPointID = new int(++PointsCounter);
    //std::cout << "Id of the current point: " << *pPointID << std::endl;
}


Point2D::Point2D(double value)
{
    std::cout << "\n\n" << std::endl;
    std::cout << "Class Point2D one-parameter constructor called..." << std::endl;
    pCoordX = new double(value);
    pCoordY = new double(value);
}


Point2D::Point2D(double CoordX, double CoordY)
{
    std::cout << "\n\n" << std::endl;
    std::cout << "Class Point2D parametrized constructor called..." << std::endl;
    this->pCoordX = new double(CoordX);
    this->pCoordY = new double(CoordY);
    //pPointID = new int(++PointsCounter);
  //  std::cout << "Id of the current point: " << PointsCounter << std::endl;
}

Point2D::~Point2D()
{
    std::cout << "Class Point2D destructor called..." << std::endl;
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
    std::cout << "Class Point2D copy constructor called..." << std::endl;
    std::cout << "\t*(rhs.pCoordX):" << *(rhs.pCoordX) << std::endl;
    pCoordX = new double(*(rhs.pCoordX));
    std::cout << "\t*(rhs.pCoordY):" << *(rhs.pCoordY) << std::endl;
    pCoordY = new double(*(rhs.pCoordY));
}



/* getters and setters */
double Point2D::GetX() const
{
    return *pCoordX;
}

double Point2D::GetY() const
{
    return *pCoordY;
}

void Point2D::SetX(double x)
{
    *pCoordX = x;
}

void Point2D::SetY(double y)
{
    *pCoordY = y;
}


/* assignment operator overloading */
Point2D& Point2D::operator=(const Point2D& rhs)
{
    std::cout << "Class Point2D assignment operator called..." << std::endl;
    if (this == &rhs) {
        return *this;
    }
    else {
        this->SetX(rhs.GetX());
        this->SetY(rhs.GetY());
        return *this;
    }
}


/* ***************************************************************************** */
/* ***************************************************************************** */
/* ***************************************************************************** */
/* ***************************************************************************** */
/* ***************************************************************************** */

// pre-incrementation
const Point2D& Point2D::operator++()
{
    std::cout << "Inside pre-incrementation operator" << std::endl;
    (*pCoordX) += 1;
    (*pCoordY) += 1;
    return *this;
}

// post-incrementation
const Point2D Point2D::operator++(int)
{

    Point2D temp(*this);
    (*pCoordX) += 1;
    (*pCoordY) += 1;
    return temp;
}

// pre-decrementation
const Point2D& Point2D::operator--()
{
    *pCoordX = *pCoordX - 1;
    *pCoordY = *pCoordY - 1;
    return *this;
}

// post-decrementation
const Point2D Point2D::operator--(int)
{
    Point2D temp(*this);
    *pCoordX = *pCoordX - 1;
    *pCoordY = *pCoordY - 1;
    return temp;
}


// addition operator
Point2D Point2D::operator+(double value) const
{
    return Point2D(this->GetX()+value, this->GetY()+value);
}

Point2D Point2D::operator+(const Point2D& rhs) const
{
    return Point2D(this->GetX() + rhs.GetX(), this->GetY() + rhs.GetY());
}


// subtraction operator
Point2D Point2D::operator-(double value) const
{
    return Point2D(this->GetX()-value, this->GetY()-value);
}

Point2D Point2D::operator-(const Point2D& rhs) const
{
    return Point2D(this->GetX() - rhs.GetX(), this->GetY() - rhs.GetY());
}


Point2D Point2D::operator*(double value)
{
    return Point2D((this->GetX())*value, (this->GetY())*value);
}

double& Point2D::operator*()
{
    return *pCoordX;
}

Point2D* Point2D::operator->()
{
    std::cout << "Arrow operator of the Point2D class called..." << std::endl;
    return this;
}


/* ***************************************************************************** */
/* ***************************************************************************** */
/* ***************************************************************************** */
/* ***************************************************************************** */
/* ***************************************************************************** */


void Point2D::DisplayCoords() const
{
    //std::cout << "\n\nDisplaying coordinates of a point with ID: " << *pPointID << std::endl;
    std::cout << "CoordX: " << *pCoordX << std::endl;
    std::cout << "CoordY: " << *pCoordY << std::endl;
}
