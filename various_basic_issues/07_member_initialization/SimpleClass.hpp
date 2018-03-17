#ifndef SIMPLECLASS_HPP
#define SIMPLECLASS_HPP

class SimpleClass {
public:
    // constructors and destructor
    SimpleClass();
    SimpleClass(int x, int y);
    SimpleClass(int x, int* py);
    ~SimpleClass();
    SimpleClass(const SimpleClass& rhs);
    // other methods
    void SetStackMember(int x);
    void SetHeapMember(int x);
    int GetStackMember() const;
    int GetHeapMember() const;
    void DescribeThisObject() const;
private:
    int StackMember;
    // note that pHeapMember points at a fixed (i.e.: constant) memory localization!
    int* const pHeapMember;
};

#endif // SIMPLECLASS_HPP
