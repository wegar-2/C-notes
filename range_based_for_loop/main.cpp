#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <map>
#include <deque>
#include "gsl/gsl_rng.h"
#include "gsl/gsl_randist.h"


int main()
{
    srand(0);

    // using range based for-loop to create and print a vector
    std::cout << "vector: " << std::endl;
    std::vector<int> vec0(100);
    for (auto& r_el: vec0) {r_el = rand() % 100 + 1; }
    for (auto el: vec0) { std::cout << el << std::endl; }

    // using range-based for loop with arrays
    std::cout << "array: " << std::endl;
    int an_array[100];
    for (auto& r_el: an_array) { r_el = rand() % 20 + 1; }
    for (auto el: an_array) { std::cout << el << std::endl; }

    // using lambda closure (also called: lambda expression) to create a vector
    std::cout << "using a lambda expression/closure: " << std::endl;
    auto lambda1 = []()-> int {return (int) (rand() % 100 + 1); };
    std::vector<int> vec1(200);
    for (auto& r_el: vec1) { r_el = lambda1(); }
    for (auto el: vec1) { std::cout << el << " "; }

    // using range-based for loop with a dequeue
    std::cout << std::endl << std::endl << "working with a deque: " << std::endl;
    std::deque<int> dequeue0(0);
    std::cout << dequeue0.size();
    for (int k = 0;  k < 200; ++k) {
        if (k % 2 == 0) { dequeue0.push_front(rand() % 100 + 1); }
        else { dequeue0.push_back(rand() % 1000 + 1); }
    }
    for (auto el: dequeue0) { std::cout << el << " "; }
    return 0;
}
