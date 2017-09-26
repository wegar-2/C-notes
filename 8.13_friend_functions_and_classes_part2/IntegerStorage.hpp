#ifndef INTEGERSTORAGE_HPP
#define INTEGERSTORAGE_HPP

/*
Some general remarks on the friendship relationship of classes:
1) it is not reflexive: A is friend of B does not imply that B is a friend of A
2) it is not transitive: A is friend of B and B is friend of C does not imply that A is friend of C
*/

class PrinterClass;

class IntegerStorage
{
private:
    int* pIntValue;
    friend class PrinterClass;
public:
    IntegerStorage();
    ~IntegerStorage();
};

#endif // INTEGERSTORAGE_HPP
