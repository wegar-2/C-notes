#include <iostream>
#include "MyRNG.hpp"

using namespace std;

// This script contains implementation of the MyRNG class
MyRNG::MyRNG() {
    cout << endl;
    cout << "Default constructor of RNG class called..." << endl;
    pRngType = gsl_rng_default;
    instance_of_rng = gsl_rng_alloc(pRngType);
    // note that here the RNG seed is not set; default value is used
    RngSeed = new unsigned long int(gsl_rng_default_seed);
}

MyRNG::MyRNG(unsigned long int seed) {
    cout << endl;
    cout << "Parametrized constructor of RNG class called..." << endl;
    pRngType = gsl_rng_default;
    // setting the value of the seed
    instance_of_rng = gsl_rng_alloc(pRngType);
    gsl_rng_set(instance_of_rng, seed);
    RngSeed = new unsigned long int(seed);
}

MyRNG::~MyRNG() {
    cout << "Inside class MyRNG destructor..." << endl;
    cout << "pRngType: " << pRngType << endl;
    cout << "instance_of_rng: " << instance_of_rng << endl;
    cout << "RngSeed: " << RngSeed << endl;
    cout << "*RngSeed: " << *RngSeed << endl;
    delete RngSeed;
    gsl_rng_free(instance_of_rng);
}

MyRNG::MyRNG(const MyRNG& rhs) {
    cout << "Class MyRNG copy constructor called..." << endl;
    pRngType = rhs.pRngType;
    instance_of_rng = rhs.instance_of_rng;
    RngSeed = rhs.RngSeed;
}

double MyRNG::generate_standard_normal() {
    return gsl_ran_gaussian(instance_of_rng, 1);
}

unsigned int MyRNG::generate_poisson(double lambda) {
    // if non-positive lambda is provided display error message
    if (lambda <= 0) {
        cout << "Error! Negative lambda provided togenerate number from Poisson distribution. Returning zero. " << endl;
        return 0;
    }
    // otherwise, accept input
    else {
        return gsl_ran_poisson(instance_of_rng, lambda);
    }
}

double MyRNG::generate_uniform(double lb, double ub) {
    // display error message if lower bound is higher than the upper bound
    if (lb >= ub) {
        cout << "Error! Lower bound is higher than the upper bound. Returning zero. " << endl;
        return 0;
    } else {
        return lb + gsl_rng_uniform(instance_of_rng)*(ub - lb);
    }
}

unsigned long int MyRNG::GetRngSeed() {
    return *RngSeed;
}
