/*
    Jeffrey D. Daye
    August 17th, 2022
    Chapter 3 - Exercise 9
    Converts spelled numbers to their digit value.
*/

#include <iostream>
#include <string>

int main()
{
    std::string number;
    
    std::cout << "Please spell out a number value (followed by 'enter'):" << std::endl;
    std::cin >> number;

    if (number == "zero") {
        std::cout << 0 << std::endl;
    }
    else if (number == "one") {
        std::cout << 1 << std::endl;
    }
    else if (number == "two") {
        std::cout << 2 << std::endl;
    }
    else if (number == "three") {
        std::cout << 3 << std::endl;
    }
    else if (number == "four") {
        std::cout << 4 << std::endl;
    }
    else {
        std::cout << "Not a number I know!" << std::endl;
    }

    return 0;
}