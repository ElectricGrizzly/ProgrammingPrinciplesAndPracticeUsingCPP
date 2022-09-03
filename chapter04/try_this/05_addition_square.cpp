/*
    Jeffrey D. Daye
    September 3rd, 2022
    Chapter 4 - Try This 5
    Implement a function that squares a number without using the * operator.
*/

#include <iostream>

int square (int number)
{
    if (number < 0) { number = -number; }
    int result = 0;
    for (int additions = number; additions > 0; additions--) {
        result += number;
    }
    return result;
}

int main()
{
    std::cout << "Enter integer values to square. Terminate entry with '|'" << std::endl;

    for(int value = 0; std::cin >> value;) {
        std::cout << value << " squared is " << square(value) << std::endl;
    }

    return 0;
}