#ifndef TESTCLASS_HPP
#define TESTCLASS_HPP

class TestClass {
public:
    TestClass();
    void DisplayObject() const;
private:
    int MemberListOne[3];
    int* const px;
    int* MemberListTwo;
};

#endif // TESTCLASS_HPP
