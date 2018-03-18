#ifndef BASECLASS_HPP
#define BASECLASS_HPP

class BaseClass {
public:
    BaseClass();
    BaseClass(int x, int y);
    ~BaseClass();
    void SetX(int x);
    void SetY(int y);
    int GetX() const;
    int GetY() const;
    virtual void DisplayObject() const;
private:
    int* px;
protected:
    int* py;
};

#endif // BASECLASS_HPP
