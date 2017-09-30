#ifndef POINT2D_HPP
#define POINT2D_HPP

#include <iostream>

using namespace std;

template <typename T1, typename T2>
class Point2D{
private:
    T1* pCoordX;
    T2* pCoordY;
public:
    Point2D();
    Point2D(T1 CoordX, T2 CoordY);
    ~Point2D();
    Point2D(const Point2D& rhs);

    void SetCoordX(T1 CoordX);
    void SetCoordY(T2 CoordY);

    T1 GetCoordX() const;
    T2 GetCoordY() const;

    void DisplayCoords() const;
};

// template class member functions implementation
template<typename T1, typename T2>
Point2D<T1, T2>::Point2D():
    pCoordX(new T1(0)),
    pCoordY(new T2(0))
{
    cout << "Non-parametrized template class Point2D constructor called..." << endl;
};

template <typename T1, typename T2>
Point2D<T1, T2>::Point2D(T1 CoordX, T2 CoordY):
    pCoordX(new T1(CoordX)),
    pCoordY(new T2(CoordY))
{
    cout << "Parametrized template class Point2D constructor called..." << endl;
}

template <typename T1, typename T2>
Point2D<T1, T2>::~Point2D()
{
    cout << "Inside template class Point2D destructor..." << endl;
    delete pCoordX;
    pCoordX = nullptr;
    delete pCoordY;
    pCoordY = nullptr;
}

template <typename T1, typename T2>
Point2D<T1, T2>::Point2D(const Point2D& rhs):
    pCoordX(new T1(rhs.GetCoordX())),
    pCoordY(new T2(rhs.GetCoordY()))
{
    cout << "Template class Point2D copy constructor called..." << endl;
}

template <typename T1, typename T2>
void Point2D<T1, T2>::SetCoordX(T1 CoordX)
{
    *pCoordX = CoordX;
}

template <typename T1, typename T2>
void Point2D<T1, T2>::SetCoordY(T2 CoordY)
{
    *pCoordY = CoordY;
}

template <typename T1, typename T2>
T1 Point2D<T1, T2>::GetCoordX() const
{
    return *pCoordX;
}

template <typename T1, typename T2>
T2 Point2D<T1, T2>::GetCoordY() const
{
    return *pCoordY;
}

template <typename T1, typename T2>
void Point2D<T1, T2>::DisplayCoords() const
{
    cout << "CoordX: " << *pCoordX << endl;
    cout << "CoordY: " << *pCoordY << endl;
}

#endif

