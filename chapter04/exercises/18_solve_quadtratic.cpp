/*
    Jeffrey D. Daye
    August 31st, 2022
    Chapter 4 - Exercise 18
    Solve a quadtratic equation from user inputs a, b, and c.
*/

#include <iostream>
#include <cmath>

int main()
{
    double a;
    double b;
    double c;

    std::cout << "Please enter values for a, b, and c of the quadtratic equation: " << std::endl;
    std::cin >> a >> b >> c;

    double discriminant = b*b - 4*a*c;
    if(discriminant < 0) {
        std::cout << "No real solutions possible" << std::endl;
    }
    else {
        double x1 = (-b + std::sqrt(discriminant)) / (2*a);
        double x2 = (-b - std::sqrt(discriminant)) / (2*a);

        std::cout << "X1: " << x1 << std::endl;
        std::cout << "X2: " << x2 << std::endl;
    }

    return 0;
}