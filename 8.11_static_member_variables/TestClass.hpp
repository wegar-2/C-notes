#ifndef TESTCLASS_HPP
#define TESTCLASS_HPP

class TestClass {
private:
    double Value;
    static unsigned int Counter;
public:
    // class constructor
    TestClass(double Value);
    // other methods
    void DisplayStatus() const;
};

#endif // TESTCLASS_HPP
