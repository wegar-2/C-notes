#ifndef MYBOX_HPP
#define MYBOX_HPP

#include <iostream>


namespace mybox {

    template <typename T>
    class MyBox;

    template <typename T>
    std::ostream& operator<<(std::ostream& osm, const MyBox<T>& rhs);

    template <typename T>
    class MyBox{
        public:
            // constructor and destructor
            MyBox(T* pArg=nullptr);
            ~MyBox();

            /* ***************************************************************** */
            // copy constructor
            MyBox(const MyBox<T>& rhs);
            // copy assignment operator
            MyBox<T>& operator=(const MyBox<T>& rhs);
            /* ***************************************************************** */


            /* ***************************************************************** */
            // move constructor
            MyBox(MyBox<T>&& rhs);
            // move assignment operator
            MyBox<T>& operator=(MyBox<T>&& rhs);
            /* ***************************************************************** */

            // << streaming operator is implemented as a friend function
            friend std::ostream& operator<< (std::ostream& osm, const MyBox<T>& rhs) {
                return osm << "Call from the overloaded << operator - printing: " << *(rhs.pObj) << std::endl;
            }


        private:
            T* pObj;
    };
}


#endif // MYBOX_HPP
