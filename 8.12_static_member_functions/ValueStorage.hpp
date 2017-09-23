#ifndef VALUESTORAGE_HPP
#define VALUESTORAGE_HPP

class ValueStorage{
private:
    double Value;
    // static variable is a private variable
    static int Counter;
public:
    ValueStorage();
    ValueStorage(double Value);
    ~ValueStorage();
    // a static method is required to access the private static member Counter
    double GetValue() const;
    static int GetCounter();
};

#endif // VALUESTORAGE_HPP
