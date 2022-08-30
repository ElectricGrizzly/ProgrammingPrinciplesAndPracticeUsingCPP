/*
    Jeffrey D. Daye
    August 29th, 2022
    Chapter 4 - Exercise 15
    Find a user input number of primes.
*/

#include <iostream>
#include <vector>

int main()
{   
    long unsigned int prime_num = 0;
    std::cout << "Please enter the number of primes you'd like to find: " << std::endl;
    std::cin >> prime_num;

    bool is_prime = true;
    std::vector<int> primes{2};
    int number = 3;
    while(primes.size() != prime_num) {
        for(int prime: primes) {
            if(number % prime == 0) {
                is_prime = false;
                break;
            }
        }
        if(is_prime) {
            primes.push_back(number);
        }
        is_prime = true;
        number++;
    }

    for(int prime: primes) {
        std::cout << prime << ", ";
    }
    std::cout << std::endl;

    return 0;
}