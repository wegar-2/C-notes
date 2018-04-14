#include <iostream>
#include "gsl/gsl_rng.h"
#include "gsl/gsl_randist.h"

using namespace std;

int main()
{
    // 1. declare pointers to object storing type of RNG and instance of RNG
    const gsl_rng_type* type_of_rng;
    gsl_rng* instance_of_rng;

    // 2. calling function that sets up the RNG environment
    gsl_rng_env_setup();

    // 3. create object storing type of RNG and instance object of RNG
    type_of_rng = gsl_rng_default;
    instance_of_rng = gsl_rng_alloc(type_of_rng);

    // 4. generate random numbers from normal distribution
    cout << "Generating random numbers from normal distribution: " << endl;
    for (int k = 0; k < 100; k++) {
        cout << "\t" << k << ": " << gsl_ran_gaussian(instance_of_rng, 1) << endl;
    }

    // 5. generate random numbers from uniform distribution on (0, 1)
    cout << "Generating random numbers from uniform distribution on (0, 1)" << endl;
    for (int k = 0; k < 100; k++) {
        cout << "\t" << k << ": " << gsl_rng_uniform(instance_of_rng) << endl;
    }
    cout << endl << endl;

    // 6. printing out parameters of the RNG used
    cout << "Name of the RNG used: " << gsl_rng_name(instance_of_rng) << endl;
    cout << "Seed used: " << gsl_rng_default_seed << endl;

    return 0;
}
