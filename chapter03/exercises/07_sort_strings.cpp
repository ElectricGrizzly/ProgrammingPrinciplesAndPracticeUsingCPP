/*
    Jeffrey D. Daye
    August 17th, 2022
    Chapter 3 - Exercise 7
    Sorts three string values to lexicographical order.
*/

#include <iostream>
#include <string>

int main()
{
    std::string val1;
    std::string val2;
    std::string val3;

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