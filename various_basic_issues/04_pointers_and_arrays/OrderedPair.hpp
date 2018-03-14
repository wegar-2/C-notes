#ifndef ORDERED_PAIR_HPP
#define ORDERED_PAIR_HPP

class OrderedPair {
public:
    // constructors and destructor
    OrderedPair();
    OrderedPair(int x);
    OrderedPair(int x, int y);
    //OrderedPair(OrderedPair& rhs); // copy constructor
    ~OrderedPair();
    // other class methods
    int GetFirstElement();
    int GetSecondElement();
    void SetFirstElement(int x);
    void SetSecondElement(int y);
    void DisplayPair();
private:
    int* pFirst;
    int* pSecond;
};

#endif // ORDERED_PAIR_HPP
