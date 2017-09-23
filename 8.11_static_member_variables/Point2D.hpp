#ifndef POINT2D_HPP
#define POINT2D_HPP

class Point2D {
public:
    // constructors and destructor
    Point2D();
    Point2D(double CoordX, double CoordY);
    ~Point2D();
    Point2D(const Point2D& rhs);

    // other member methods
    void SetCoordX(double CoordX);
    void SetCoordY(double CoordY);

    double GetCoordX() const;
    double GetCoordY() const;

    void DisplayCoords() const;

    static double TestField;
    static constexpr double TestField2 = 1.3621;

private:
    double CoordX;
    double CoordY;
};

#endif // POINT2D_HPP
