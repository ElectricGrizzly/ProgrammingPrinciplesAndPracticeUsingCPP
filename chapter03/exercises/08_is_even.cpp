/*
    Jeffrey D. Daye
    August 17th, 2022
    Chapter 3 - Exercise 8
    Checks to see if an entered  integer is even or odd.
*/

#include <iostream>
#include <string>

bool is_even(int integer)
{
    return integer % 2 == 0;
}

int main()
{
    int value = 0;

    std::cout << "Please enter an integer value (followed by 'enter'):" << std::endl;
    std::cin >> value;

    if (is_even(value)) {
        std::cout << "The value " << value << " is an even number." << std::endl;
    }
    else {
        std::cout << "The value " << value << " is an odd number." << std::endl;
    }

    return 0;
}