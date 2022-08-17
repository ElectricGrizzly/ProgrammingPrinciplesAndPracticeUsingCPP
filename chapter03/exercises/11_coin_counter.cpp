/*
    Jeffrey D. Daye
    August 17th, 2022
    Chapter 3 - Exercise 11
    Provides a summary of coins (Canadian) a user has (pennies, nickels, dimes, quarters, loonies, and toonies).
*/

#include <iostream>
#include <string>

double sum_coins(int pennies, int nickels, int dimes, int quarters, int loonies, int toonies)
{
    int nickel_val = 5;
    int dime_val = 10;
    int quarter_val = 25;
    int loonie_val = 100;
    int toonie_val = 200;

    return pennies + nickels * nickel_val + dimes * dime_val + quarters * quarter_val + loonies * loonie_val + toonies * toonie_val;
}

int main()
{
    int pennies = 0;
    int nickels = 0;
    int dimes = 0;
    int quarters = 0;
    int loonies = 0;
    int toonies = 0;

    std::cout << "How many pennies do you have?" << std::endl;
    std::cin >> pennies;
    std::cout << "How many nickels do you have?" << std::endl;
    std::cin >> nickels;
    std::cout << "How many dimes do you have?" << std::endl;
    std::cin >> dimes;
    std::cout << "How many quarters do you have?" << std::endl;
    std::cin >> quarters;
    std::cout << "How many loonies do you have?" << std::endl;
    std::cin >> loonies;
    std::cout << "How many toonies do you have?" << std::endl;
    std::cin >> toonies;

    if (pennies == 1) {
        std::cout << "\nYou have " << pennies << " penny." << std::endl;
    }
    else {
        std::cout << "\nYou have " << pennies << " pennies." << std::endl;
    }

    if (nickels == 1) {
        std::cout << "You have " << nickels << " nickel." << std::endl;
    }
    else {
        std::cout << "You have " << nickels << " nickels." << std::endl;
    }

    if (dimes == 1) {
        std::cout << "You have " << dimes << " dime." << std::endl;
    }
    else {
        std::cout << "You have " << dimes << " dimes." << std::endl;
    }

    if (quarters == 1) {
        std::cout << "You have " << quarters << " quarter." << std::endl;
    }
    else {
        std::cout << "You have " << quarters << " quarters." << std::endl;
    }

    if (loonies == 1) {
        std::cout << "You have " << loonies << " loonie." << std::endl;
    }
    else {
        std::cout << "You have " << loonies << " loonies." << std::endl;
    }

    if (toonies == 1) {
        std::cout << "You have " << toonies << " toonie." << std::endl;
    }
    else {
        std::cout << "You have " << toonies << " toonies." << std::endl;
    }

    std::cout << "The value of all of your coins is $" << sum_coins(pennies, nickels, dimes, quarters, loonies, toonies) / 100 << std::endl;

    return 0;
}