#include <iostream>
#include "ListsStorage.hpp"
#include "BaseClass.hpp"
#include "DerivedClass.hpp"

using namespace std;

int main()
{
    // 1.
    ListStorage ls1 = ListStorage();
    // 2.
    BaseClass bc1 = BaseClass();
    bc1.DisplayObject();
    // 3.
    BaseClass bc2 = BaseClass(10, 23);
    bc2.DisplayObject();
    // 4.
    BaseClass* MyPointer1 = new BaseClass();
    MyPointer1->DisplayObject();
    BaseClass* MyPointer2 = new DerivedClass();
    MyPointer2->DisplayObject();
    return 0;
}
