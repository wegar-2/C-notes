#include <iostream>

using namespace std;

class BaseClass {
private:
    double field1;
public:
    BaseClass(double field1) { this->field1 = field1; }
    double MultiplyByField(double valueIn) {
        return valueIn*field1;
    }
};

class DerivedClass : public BaseClass {

public:
    DerivedClass(double field1) : BaseClass(field1) {}
/*
    double MultiplyByField(double valueIn) {
        return valueIn*field1;
    }
*/
};

int main()
{
    BaseClass obj1(123);
    cout << "obj1.MultiplyByField(2)" << obj1.MultiplyByField(2) << endl;

    /* this will throw an error if the implementation of
    DerivedClass function MultiplyByField is uncommented */
    DerivedClass obj2(10);
    cout << "obj2.MultiplyByField(2)" << obj2.MultiplyByField(2) << endl;
    /*
    Explanation for why it works when the DerivedClass' implementation of the MultiplyByField
    function is commented out is the following: the object of the DerivedClass is using the
    implementation of the MultiplyByField inherited from the BaseClass then and so the implemen-
    tation of the DerivedClass is not accessing members of BaseClass directly then.
    */
    return 0;
}
