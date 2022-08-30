/*
    Jeffrey D. Daye
    August 29th, 2022
    Chapter 4 - Exercise 11
    Find primes 1 to 100 where 2 is the first prime.
*/

#include <iostream>
#include <vector>

int main()
{   
    constexpr int max = 100;
    bool is_prime = true;
    std::vector<int> primes{2};
    for(int i = 3; i <= max; i++) {
        for(int prime: primes) {
            if(i % prime == 0) {
                is_prime = false;
                break;
            }
        }
        if(is_prime) {
            primes.push_back(i);
        }
        is_prime = true;
    }

    for(int prime: primes) {
        std::cout << prime << ", ";
    }
    std::cout << std::endl;

    return 0;
}