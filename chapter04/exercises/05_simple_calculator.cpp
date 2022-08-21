/*
    Jeffrey D. Daye
    August 21st, 2022
    Chapter 4 - Exercise 5
    A simple calculator that performs +, -, *, and /.
*/

#include <iostream>

int main()
{
    double value1 = 0.0;
    double value2 = 0.0;
    char op = ' ';

    std::cout << "Simple calculator (Usage: 89 / 27, followed by 'Enter'):" << std::endl;

    while(std::cin >> value1 >> op >> value2) {
        switch (op) {
        case '+':
            std::cout << "The sum of " << value1 << " and " << value2 << " is " << value1 + value2 << "." << std::endl;
            break;
        case '-':
            std::cout << "The difference of " << value1 << " and " << value2 << " is " << value1 - value2 << "." << std::endl;
            break;
        case '*':
            std::cout << "The product of " << value1 << " and " << value2 << " is " << value1 * value2 << "." << std::endl;
            break;
        case '/':
            if (value2 == 0) {
                std::cout << "Cannot divide by 0!" << std::endl;
                continue;
            }
            std::cout << "The ratio of " << value1 << " and " << value2 << " is " << value1 / value2 << "." << std::endl;
            break;
        default:
            std::cout << "Please provide a valid operation!" << std::endl;
            break;
        }

        std::cout << std::endl;
    }

    return 0;
}