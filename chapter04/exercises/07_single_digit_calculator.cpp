/*
    Jeffrey D. Daye
    August 21st, 2022
    Chapter 4 - Exercise 7
    Exercise 5 simple calculator that takes only single digits spelled out or not.
*/

#include <iostream>
#include <string>
#include <vector>

int parse_str_to_int(std::string number)
{
    std::vector<std::string> digits{"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int count = 0;

    for(std::string digit : digits) {
        if(digit == number) {
            return count;
        }
        count++;
    }
    try {
        return std::stoi(number);
    } 
    catch (std::invalid_argument const &exception) {
        return count;
    }
}

int main()
{   
    std::string value1 = "";
    std::string value2 = "";
    char op = ' ';

    std::cout << "Simple calculator (Usage: one / two, followed by 'Enter'):" << std::endl;

    while(std::cin >> value1 >> op >> value2 && value1 != "|" && value2 != "|" && op != '|') {
        int digit1 = parse_str_to_int(value1);
        int digit2 = parse_str_to_int(value2);
        if(digit1 > 9 || digit1 < 0 || digit2 > 9 || digit2 < 0) {
            std::cout << "Entry digit values must be between 0 and 9 (inclusive)!" << std::endl;
            continue;
        }

        switch (op) {
            case '+':
                std::cout << "The sum of " << value1 << " and " << value2 << " is " << digit1 + digit2 << "." << std::endl;
                break;
            case '-':
                std::cout << "The difference of " << value1 << " and " << value2 << " is " << digit1 - digit2 << "." << std::endl;
                break;
            case '*':
                std::cout << "The product of " << value1 << " and " << value2 << " is " << digit1 * digit2 << "." << std::endl;
                break;
            case '/':
                if (digit2 == 0) {
                    std::cout << "Cannot divide by 0!" << std::endl;
                    continue;
                }
                std::cout << "The ratio of " << value1 << " and " << value2 << " is " << digit1 / digit2 << "." << std::endl;
                break;
            default:
                std::cout << "Please provide a valid operation!" << std::endl;
                break;
        }

        std::cout << std::endl;
    }

    return 0;
}