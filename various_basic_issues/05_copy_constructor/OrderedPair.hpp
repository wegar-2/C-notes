#ifndef ORDEREDPAIR_HPP
#define ORDEREDPAIR_HPP

class OrderedPair {
public:
    // constructors and destructor
    OrderedPair();
    OrderedPair(int x, int y);
    OrderedPair(const OrderedPair& rhs);
    ~OrderedPair();
    // other class methods
    int GetFirstElem();
    int GetSecondElem();
    void SetFirstElem(int val);
    void SetSecondElem(int val);
    void DisplayElems();
private:
    int* pFirstElem;
    int* pSecondElem;
};

#endif // ORDEREDPAIR_HPP
