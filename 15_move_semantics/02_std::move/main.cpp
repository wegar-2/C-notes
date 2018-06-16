#include <iostream>
#include <utility>
#include <string>
#include "SwapFunctions.hpp"
#include "MyBox.hpp"

// function std::move can be used to enforce call to move constructor/assignment operator
/*
    This project demonstrates how the values of two variables of the same type can be swapped.

    Ever more efficient ways to do that are presented.
*/

int main()
{
    // 1. Examples - using class double objects
    double x = 123.33;
    double y = 434.23;
    std::cout << "1. " << std::endl;
    std::cout << "Before swap: " << std::endl;
    std::cout << "x = " << x << ", y = " << y << std::endl;
    sfuns::SwapFunctionOne<double>(x, y);
    std::cout << "After swap: " << std::endl;
    std::cout << "x = " << x << ", y = " << y << std::endl;
    std::cout << std::endl << std::endl << std::endl << std::endl;

    // 2. examples using class MyBox objects
    // 2.1.
    std::cout << "box1..." << std::endl;
    mybox::MyBox<int> box1; // constructor is called here!!!
    std::cout << "box2..." << std::endl;
    mybox::MyBox<int> box2(new int);
    std::cout << "box3..." << std::endl;
    mybox::MyBox<int> box3 = mybox::MyBox<int>(new int);
    std::cout << std::endl << std::endl << std::endl << std::endl;

    // 3. overview of various situations
    mybox::MyBox<std::string> str_box_1(new std::string("text"));
    mybox::MyBox<std::string> str_box_2(new std::string(""));
    std::cout << "stringbox 1: " << str_box_1 << std::endl;
    std::cout << "stringbox 2: " << str_box_2 << std::endl;

    return 0;
}
