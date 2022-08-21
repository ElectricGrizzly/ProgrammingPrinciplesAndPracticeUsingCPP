/*
    Jeffrey D. Daye
    August 21st, 2022
    Chapter 4 - Exercise 4
    A numbers guessing game that guesses a number between 1 and 100 (non-inclusive) in seven guesses.
*/

#include <iostream>

int main()
{
    int max = 100;
    int min = 1;
    char response = ' ';
    int guesses = 0;
    int guess_point = 0;

    std::cout << "Think of a number between " << min << " and " << max << std::endl;

    while(max - min != 1) {
        guess_point = (max - min)/2 + min;
        std::cout << guesses + 1 << ". Is your number less than or equal to " << guess_point << "? (y/n):" << std::endl;
        std::cin >> response;

        if (response == 'y' || response == 'Y') {
            max = guess_point;
        }
        else if (response == 'n' || response == 'N') {
            min = guess_point;
        }
        else {
            std::cout << "Please enter a valid response 'y' or 'n'!" << std::endl;
        }

        guesses++;
        std::cout << std::endl;
    }

    std::cout << "Your number must be " << max << "!" << std::endl;

    std::cout << "I figured it out in " << guesses << " guesses!" << std::endl;

    return 0;
}