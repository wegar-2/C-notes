#include <iostream>
#include "TestClass.hpp"

using namespace std;

// the program below produces a memory leak - it demonstrates what should not be done

int main()
{
    TestClass* pObj;
    cout << "pointer declared..." << endl;
    pObj = new TestClass;
    pObj->Print();
    // uncomment the line below to make the whole thing OK
    /*
    delete pObj;
    pObj = nullptr;
    */
    cout << "reassigning..." << endl;
    pObj = new TestClass(10);
    pObj->Print();
    cout << "Finished executing program statements. ";
    return 0;
}
