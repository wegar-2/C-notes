#ifndef CAT_HPP
#define CAT_HPP

class Cat {
private:
    double CatWeight;
    // if constexpr keyword is used, the static member can be initialized inside the class definition
    constexpr static int Counter = 0;
    static int Counter2;
public:
    Cat();
    ~Cat();
    // static method cannot be defined with const keyword here
    static int GetCatsCounter();
};

#endif // CAT_HPP
