#ifndef POINT2D_HPP
#define POINT2D_HPP

#include <iostream>

class Point2D
{
private:
    double* pCoordX;
    double* pCoordY;
    //static int PointsCounter;
    //int* pPointID;
public:
    // constructors and destructor
    Point2D();
    Point2D(double value);
    Point2D(double CoordX, double CoordY);
    ~Point2D();
    // copy constructor
    Point2D(const Point2D& rhs);
    // assignment operator
    Point2D& operator=(const Point2D& rhs);


    // getters and setters
    double GetX() const;
    double GetY() const;

    void SetX(double x);
    void SetY(double y);

    /* **************************************************** */
    /* **************************************************** */
    // various operators' implementation
    const Point2D& operator++();
    const Point2D operator++ (int postOper);

    const Point2D& operator--();
    const Point2D operator-- (int postOper);

    Point2D operator+(double value) const;
    Point2D operator+(const Point2D& rhs) const;

    Point2D operator-(double value) const;
    Point2D operator-(const Point2D& rhs) const;

    Point2D operator*(double value);

    double& operator*();
    Point2D* operator->();



    /* **************************************************** */
    /* **************************************************** */


    // extraction operator << is implemented as a friend function
    friend std::ostream operator<<(std::ostream osm, const Point2D& point);

    // other member methods
    void DisplayCoords() const;
};

#endif // POINT2D_HPP
