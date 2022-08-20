/*
    Jeffrey D. Daye
    August 20th, 2022
    Chapter 4 - Exercise 2
    Program that gets the median of a vector of values.
*/

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<double> values;

    std::cout << "Please enter a sequence of values terminated by '|': " << std::endl;

    for (double value; std::cin >> value;) {
        values.push_back(value);
    }

    int length = values.size();
    int middle = length / 2;

    std::sort(values.begin(), values.end());

    if (length % 2 == 0) {
        double left = values[middle - 1];
        double right = values[middle];

        std::cout << "Median: " << (left + right) / 2 << std::endl;
    }
    else {
        std::cout << "Median: " << values[middle] << std::endl;
    }

    return 0;
}