#ifndef MYRNG_HPP
#define MYRNG_HPP

#include "gsl/gsl_rng.h"
#include "gsl/gsl_randist.h"

class MyRNG {
public:
    // class constructors and destructor
    MyRNG();
    MyRNG(unsigned long int seed);
    ~MyRNG();
    MyRNG(const MyRNG& rhs);
    // other class methods
    double generate_standard_normal();
    unsigned int generate_poisson(double lambda);
    double generate_uniform(double lb, double ub);
    unsigned long int GetRngSeed();
private:
    // object storing type of RNG
    const gsl_rng_type* pRngType = nullptr;
    // instance of RNG
    gsl_rng* instance_of_rng = nullptr;
    // store value of the seed used by RNG
    unsigned long int* RngSeed = nullptr;
};

#endif // MYRNG_HPP
