#include "MyBox.hpp"
#include <iostream>
#include <string>


namespace mybox {

    // class MyBox non-parametrized constructor
    template <typename T>
    MyBox<T>::MyBox(T* pArg) : pObj(pArg) {
        std::cout << "Class MyBox constructor called..." << std::endl;
    }

    // class destructor
    template <typename T>
    MyBox<T>::~MyBox() {
        std::cout << "Class MyBox destructor called..." << std::endl;
        delete pObj;
    }

    // class copy constructor
    template <typename T>
    MyBox<T>::MyBox(const MyBox<T>& rhs) {
        std::cout << "Class MyBox copy constructor called..." << std::endl;
        pObj = new T;
        *pObj = *(rhs.pObj);
    }

    // copy assignment operator overloading
    template <typename T>
    MyBox<T>& MyBox<T>::operator=(const MyBox<T>& rhs) {
        std::cout << "Class MyBox copy assignment operator called..." << std::endl;
        // check for self-assignment
        if (&rhs == this) {
            return *this;
        }
        else {
            // make this object point to the obtained
            delete pObj;
            pObj = new T;
            *pObj = *(rhs.pObj);
            return *this;
        }
    }

    // move constructor
    template <typename T>
    MyBox<T>::MyBox(MyBox<T>&& rhs) {
        std::cout << "Class MyBox move constructor called..." << std::endl;\
        pObj = rhs.pObj;
        rhs.pObj = nullptr;
    }

    template <typename T>
    MyBox<T>& MyBox<T>::operator=(MyBox<T>&& rhs) {
        std::cout << "Class MyBox move assignment operator called..." << std::endl;
        delete pObj;
        pObj = rhs.pObj;
        rhs.pObj = nullptr;
        return *this;
    }

}


template class mybox::MyBox<int>;
template class mybox::MyBox<double>;
template class mybox::MyBox<std::string>;
template class mybox::MyBox<unsigned int>;

