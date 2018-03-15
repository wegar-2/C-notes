#include <iostream>
#include "OrderedPair.hpp"

using namespace std;

void MyFunctionOne(OrderedPair* pair_in, int x, int y);

void MyFunctionTwo(OrderedPair pair_in);

int main()
{
    OrderedPair pair1 = OrderedPair();
    OrderedPair pair2 = OrderedPair();
    cout << "pair1:" << endl;
    pair1.DisplayElems();
    cout << "\n\n" << endl;
    cout << "pair2:" << endl;
    pair2.DisplayElems();
    cout << "\n\n" << endl;

    cout << "Using MyFunctionOne..." << endl;
    cout << "Executing: MyFunctionOne(*pair1, 101, 102)" << endl;
    MyFunctionOne(&pair1, 101, 102);
    cout << "pair1 now: " << endl;
    pair1.DisplayElems();
    cout << "\n\n\n" << endl;

    cout << "Using MyFunctionTwo..." << endl;
    cout << "pair2: " << endl;
    pair2.DisplayElems();
    cout << "Calling MyFunctionTwo..." << endl;
    MyFunctionTwo(pair2);
    cout << "pair2: " << endl;
    pair2.DisplayElems();

    return 0;
}

void MyFunctionOne(OrderedPair* pair_in, int x, int y) {
    cout << "Inside MyFunctionOne..." << endl;
    (*pair_in).SetFirstElem(x);
    (*pair_in).SetSecondElem(y);
}

void MyFunctionTwo(OrderedPair pair_in) {
    cout << "Inside MyFunctionTwo..." << endl;
    OrderedPair pair_internal = pair_in;
    pair_internal.DisplayElems();
}
