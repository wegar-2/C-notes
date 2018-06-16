#ifndef SWAPFUNCTIONS_SFUNS_SWAPFUNCTIONONE_HPP
#define SWAPFUNCTIONS_SFUNS_SWAPFUNCTIONONE_HPP

#include <iostream>
#include <utility>

namespace sfuns {

    template <typename T>
    void SwapFunctionOne(T& rx, T& ry) {
        std::cout << "Inside function SwapFunctionOne. " << std::endl;
        T temp = rx; // copy assignment
        ry = rx;
        rx = temp;
    }

    template <typename T>
    void SwapFunctionTwo(T* px, T* py) {
        std::cout << "Inside function SwapFunctionTwo. " << std::endl;
        T temp = *px; //copy constructor
        *py = *px; // copy assignment
        *px = *temp; // copy assignment
    }

    template <typename T>
    void SwapFunctionThree(T& rx, T& ry) {
        std::cout << "Inside function SwapFunctionThree. " << std::endl;
        T temp = std::move(ry);
        ry = std::move(rx);
        rx = std::move(temp);
    }

}

#endif // SWAPFUNCTIONS_SFUNS_SWAPFUNCTIONONE_HPP




