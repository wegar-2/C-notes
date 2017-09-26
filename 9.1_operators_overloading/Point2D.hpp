#ifndef POINT2D_HPP
#define POINT2D_HPP

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
    Point2D(double CoordX, double CoordY);
    ~Point2D();
    // copy constructor
    Point2D(const Point2D& rhs);
    // operators
    Point2D operator++();
    Point2D& operator++ (int postOper);
    // other member methods
    void DisplayCoords() const;
};

#endif // POINT2D_HPP
