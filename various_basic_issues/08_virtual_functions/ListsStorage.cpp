#include <iostream>
#include "ListsStorage.hpp"

using namespace std;

// constructors and destructor implementation
ListStorage::ListStorage() :
    PrivateStackList {2, 4, 6, 8, 10} {
    cout << "Class ListStorage default constructor has been called..."
        << endl;
    ProtectedHeapList = new int[5];
}

ListStorage::ListStorage(int* InitList) :
    ProtectedHeapList(InitList), PrivateStackList {2, 4, 6, 8, 10} {
    cout << "Class ListStorage constructor accepting integers list has been called..."
        << endl;
}

ListStorage::~ListStorage() {
    cout << "Class ListStorage destructor has been called..." << endl;
    delete[] ProtectedHeapList;
}

ListStorage::ListStorage(const ListStorage& rhs) {
    cout << "Class ListStorage copy constructor has been called..." << endl;
}


