#ifndef DERIVEDCLASS_HPP
#define DERIVEDCLASS_HPP

#include "BaseClass.hpp"

class DerivedClass : public BaseClass {
public:
    DerivedClass();
    ~DerivedClass();
    virtual void DisplayObject() const;
private:
    double* AnotherMemberArray;
    int* LengthOfAnotherMemberArray;
};

#endif // DERIVEDCLASS_HPP
