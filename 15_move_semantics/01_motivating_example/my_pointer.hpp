#ifndef __MYPOINTER_HPP__
#define __MYPOINTER_HPP__

#include <iostream>

using namespace std;

template <typename T>
class MyPointer {
    public:
        // class constructor and destructor
        MyPointer(T* pArg=nullptr) : pObj(pArg) {}
        ~MyPointer() { delete pObj; }

        // copy constructor and copy assignment operator
        MyPointer(const MyPointer& rhs) {
            // if-else block could be skipped
            cout << "Copy constructor called..." << endl;
            if (pObj == nullptr) {
                cout << "LHS object stores nullptr..." << endl;
                pObj = new T;
                *pObj = *(rhs.pObj);
            }
            else {
                cout << "LHS object stores a non-null pointer..." << endl;
                delete pObj;
                pObj = new T;
                *pObj = *(rhs.pObj);
            }
        }
        MyPointer& operator=(const MyPointer& rhs) {
            // if-else could be skipped
            cout << "Copy assignment operator called..." << endl;
            if (pObj == nullptr) {
                cout << "LHS obj stores nullptr..." << endl;
                pObj = new T;
                *pObj = *(rhs.pObj);
            }
            else {
                cout << "LHS object stores a non-null pointer..." << endl;
                delete pObj;
                pObj = new T;
                *pObj = *(rhs.pObj);
            }
            return *this;
        }

        // extraction operator - allows class user to access pObj
        T& operator*() {
            return *pObj;
        }

        /* ****************************************************************** */
        /* ****************** move semantics implementation ***************** */

        // move constructor - the argument is r-vale reference
        MyPointer(const MyPointer&& rhs) {
            cout << "Class MyPointer move constructor called..." << endl;
            delete pObj;
            pObj = rhs.pObj;
            delete rhs.pObj;
        }

        // move assignment - assignment operator
        MyPointer& operator=(const MyPointer&& rhs) {
            cout << "Class MyPointer move assignment operator called..." << endl;
            delete pObj;
            pObj = rhs.pObj;
            delete rhs.pObj;
            return *this;
        }

    private:
        T* pObj;
};

#endif // __MYPOINTER_HPP__
