/*
    Jeffrey D. Daye
    August 17th, 2022
    Chapter 3 - Exercise 4
    Getting the smaller, larger, sum, difference, product, and ratio of two integer values.
*/

#include <iostream>

int main()
{
    int val1 = 0;
    int val2 = 0;

    std::cout << "Enter two integer values separated by a space (followed by 'enter'):" << std::endl;
    std::cin >> val1 >> val2;

    if (val1 > val2 ) {
        std::cout << "Smaller: " << val2 << std::endl;
        std::cout << "Larger: " << val1 << std::endl;
    } 
    else if (val1 < val2) {
        std::cout << "Smaller: " << val1 << std::endl;
        std::cout << "Larger: " << val2 << std::endl;
    } 
    else {
        std::cout << "Both entered values are equal!" << std::endl;
    }

    std::cout << "Sum: " << val1 + val2 << std::endl;
    std::cout << "Difference: " << val1 - val2 << std::endl;
    std::cout << "Product: " << val1 * val2 << std::endl;
    if (val2 == 0) {
        std::cout << "Division by zero isn't possible!" << std::endl;
    }
    else {
        std::cout << "Ratio: " << val1 / val2 << std::endl;
    }

    return 0;
}