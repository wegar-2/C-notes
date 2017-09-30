#include "Storage.hpp"
#include <iostream>

using namespace std;

Storage::Storage():
    Size(1),
    ArrayOfInts(new int[1])
{
    cout << "Class Storage non-parametrized constructor called..." << endl;
    ArrayOfInts[1] = 0;
}

Storage::Storage(int N):
    Size(N),
    ArrayOfInts(new int[N])
{
    cout << "Class Storage parametrized constructor called..." << endl;
    for(int i = 0; i < N; i++) {
        ArrayOfInts[i] = 0;
    }
}

Storage::~Storage()
{
    cout << "Class Storage destructor called..." << endl;
    delete[] ArrayOfInts;
}

Storage::Storage(const Storage& rhs):
    Size(rhs.GetSize()),
    ArrayOfInts(new int[rhs.GetSize()])
{
    for (int i = 0; i < rhs.GetSize(); i++) {
        ArrayOfInts[i] = rhs.GetElement(i);
    }
}

void Storage::SetElement(int index, int value)
{
    ArrayOfInts[index] = value;
}

int Storage::GetSize() const
{
    return Size;
}

int Storage::GetElement(int i) const
{
    if ((i < 0) | (i > (Size - 1)) ) {
        cout << "ERROR in the call of GetElement function of class Storage!" << endl;
        return 0;
    } else {
        return ArrayOfInts[i];
    }
}

void Storage::DisplayElements() const
{
    cout << "\n\nDisplaying elements of a Storage class object: " << endl;
    for (int i = 0; i < Size; i++) {
        cout << "\tArrayOfInts[" << i << "] = " << ArrayOfInts[i] << endl;
    }
    cout << "\n" << endl;
}

