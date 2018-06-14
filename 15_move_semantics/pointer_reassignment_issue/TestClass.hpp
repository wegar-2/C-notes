#ifndef __TESTCLASS_HPP__
#define __TESTCLASS_HPP__

#include <iostream>

class TestClass {
    public:
        TestClass(int val=0) {
            value = val;
            std::cout << "Class TestClass constructor called..." << std::endl;
        }
        ~TestClass() { std::cout << "Class TestClass destructor called..." << std::endl; }
        void Print() {
            std::cout << "\tmy value is: " << value << std::endl;
            std::cout << "\tmy address is: " << this << std::endl;
        }
    private:
        int value;
};

#endif // __TESTCLASS_HPP__
