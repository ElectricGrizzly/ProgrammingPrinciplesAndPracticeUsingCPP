/*
    Jeffrey D. Daye
    August 21st, 2022
    Chapter 4 - Exercise 9b (double)
    Calculating the grains of rice per square on a chessboard according to emperor story.
*/

#include <iostream>
#include <vector>

int main()
{
    constexpr int squares_on_board = 64;
    double previous = 1;
    double sum = 0;

    for(int square = 2; square <= squares_on_board; square++) {
        sum += previous * 2;
        previous *= 2;
    }

    std::cout << "Sum: " << sum << std::endl;

    return 0;
}