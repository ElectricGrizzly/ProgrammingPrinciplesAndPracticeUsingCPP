/*
    Jeffrey D. Daye
    August 17th, 2022
    Chapter 3 - Exercise 10
    Perfomrs an operation based on user input of an operator followed by two operand values.
*/

#include <iostream>
#include <string>

int main()
{
    std::string operation;
    double operand1;
    double operand2;

    std::cout << "Enter an operation (+, -, *, /, plus, minus, mul, div) followed by two operands (then press 'enter'):" << std::endl;

    while(std::cin >> operation >> operand1 >> operand2) {
        if (operation == "+" || operation == "plus") {
            std::cout << operand1 << " + " << operand2 << " = " << operand1 + operand2 << std::endl;
        }
        else if (operation == "-" || operation == "minus") {
            std::cout << operand1 << " - " << operand2 << " = " << operand1 - operand2 << std::endl;
        }
        else if (operation == "*" || operation == "mul") {
            std::cout << operand1 << " * " << operand2 << " = " << operand1 * operand2 << std::endl;  
        }
        else if (operation == "/" || operation == "div") {
            if (operand2 == 0) {
                std::cout << "Cannot divide by 0!" << std::endl;
            }
            else {
                std::cout << operand1 << " / " << operand2 << " = " << operand1 / operand2 << std::endl;
            }   
        }
        else {
            std::cout << "No valid operation specified. Try again." << std::endl;
        }
        std::cout << std::endl;
    }

    return 0;
}