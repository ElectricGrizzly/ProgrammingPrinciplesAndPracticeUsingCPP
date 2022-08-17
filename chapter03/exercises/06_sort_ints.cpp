/*
    Jeffrey D. Daye
    August 17th, 2022
    Chapter 3 - Exercise 5
    Getting the smaller, larger, sum, difference, product, and ratio of two floating-point values.
*/

#include <iostream>

int main()
{
    int val1 = 0;
    int val2 = 0;
    int val3 = 0;

    std::cout << "Enter three integer values separated by a space (followed by 'enter'):" << std::endl;
    std::cin >> val1 >> val2 >> val3;

    if (val1 <= val2 && val1 <= val3) {
        std::cout << val1 << ", ";
        if (val2 <= val3) {
            std::cout << val2 << ", " << val3 << std::endl;
        }
        else {
            std::cout << val3 << ", " << val2 << std::endl;
        }
    }
    else if (val2 <= val1 && val2 <= val3) {
        std::cout << val2 << ", ";
        if (val1 <= val3) {
            std::cout << val1 << ", " << val3 << std::endl;
        }
        else {
            std::cout << val3 << ", " << val1 << std::endl;
        }
    }
    else {
        std::cout << val3 << ", ";
        if (val1 <= val2) {
            std::cout << val1 << ", " << val2 << std::endl;
        }
        else {
            std::cout << val2 << ", " << val1 << std::endl;
        }
    }

    return 0;
}