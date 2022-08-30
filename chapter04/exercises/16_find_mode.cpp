/*
    Jeffrey D. Daye
    August 29th, 2022
    Chapter 4 - Exercise 16
    Find the mode of a series of positive integers.
*/

#include <iostream>
#include <vector>
#include <map>

int main()
{
    std::vector<int> numbers;
    std::map<int, int> counts;
    int largest = 0;
    std::cout << "Enter a series of positive integers seperated by spaced. Press 'enter' to terminate:" << std::endl;

    for(int number; std::cin >> number;) {
        numbers.push_back(number);
    }

    return 0;
}