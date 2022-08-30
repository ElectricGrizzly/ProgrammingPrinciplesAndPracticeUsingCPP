/*
    Jeffrey D. Daye
    August 29th, 2022
    Chapter 4 - Exercise 13
    Find primes from 1 to 100 using the Sieve of Eratosthenes, 2 as the first prime.
*/

#include <iostream>
#include <vector>
#include <cmath>

void make_prime_array(std::vector<bool> &is_prime_array, int max)
{
    for(int i = 2; i <= max; i++) {
        is_prime_array.push_back(true);
    }
}

int main()
{   
    constexpr int max = 100;
    std::vector<bool> is_prime_array;
    make_prime_array(is_prime_array, max);

    for(int i = 2; i <= sqrt(max); i++) {
        if(is_prime_array[i - 2] == true) {
            for(int j = i + i; j <= max; j += i) {
                is_prime_array[j - 2] = false;
            }
        }
    }

    for(long unsigned int i = 0; i <= is_prime_array.size(); i++) {
        if(is_prime_array[i]) {
            std::cout << i + 2 << ", ";
        }
    }
    std::cout << std::endl;

    return 0;
}