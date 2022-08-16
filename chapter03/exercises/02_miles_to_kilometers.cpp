/*
    Jeffrey D. Daye
    August 16th, 2022
    Chapter 3 - Exercise 2
    Convert miles to kilometers
*/

#include <iostream>

double miles_to_kilometers(double miles)
{
    double kilometers_in_mile = 1.609;

    return miles * kilometers_in_mile;
}

int main()
{
    double miles = 0;

    std::cout << "Please enter the number of miles you'd like to converte (followed by 'enter'):\n";
    std::cin >> miles;

    double kilometers = miles_to_kilometers(miles);

    std::cout << "\nThere is " << kilometers << " kilometers in " << miles << " miles.\n";
    std::cout << miles << "mi == " << kilometers << "km\n";

    return 0;
}