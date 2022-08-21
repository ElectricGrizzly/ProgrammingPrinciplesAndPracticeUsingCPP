/*
    Jeffrey D. Daye
    August 21st, 2022
    Chapter 4 - Exercise 6
    Convert input of spelled out digits to digit values, and input digits to spelled out values.
*/

#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::string number = " ";
    int value = 0;
    std::vector<std::string> digits{"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    std::cout << "Enter and spelled digit to see its digit value or a digit value to see it spelled out (enter '|' to finish)" << std::endl;

    while(true) {
        if(std::cin >> value) {
            if(value < 0 || value > 9) {
                std::cout << "Must be a digit between 0 and 9 (inclusive)!" << std::endl;
                continue;
            }
            std::cout << digits[value] << std::endl;
        }
        else {
            std::cin.clear();
            std::cin >> number;
            if (number == "|") {
                break;
            }
            int count = 0;
            for(std::string digit : digits) {
                if(digit == number) {
                    std::cout << count << std::endl;
                    break;
                }
                count++;
            }
            if (count > 9) {
                std::cout << "Must be a valid spelled out digit from 0 to 9 (inclusive)!" << std::endl;
            }
        }

        std::cout << std::endl;
    }

    return 0;
}