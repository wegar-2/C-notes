#ifndef __POINT2D_HPP__
#define __POINT2D_HPP__

class Point2D {
    public:
        Point2D(double val=1.0);
        ~Point2D();
        Point2D(const Point2D& rhs); // copy constructor
        Point2D& operator=(const Point2D& rhs); // copy assignment operator
    private:
        double X;
        double Y;
};

#endif // __POINT2D_HPP__
