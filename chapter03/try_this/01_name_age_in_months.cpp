/*
    Jeffrey D. Daye
    September 4th, 2022
    Chapter 3 - Try This 1
    Get a users name and age (in years) and print it in months.
*/

#include <iostream>
#include <string>

int main()
{
    constexpr int months_per_year = 12;
    std::string name;
    double age = 0;

    std::cout << "Enter a name and age to get a nice message! Terminate input with 'Enter'" << std::endl;
    while (std::cin >> name >> age && name != "|") {
        std::cout << "Hello, " << name << " (age: " << age * months_per_year << " months)\n" << std::endl;
    }

    return 0;
}