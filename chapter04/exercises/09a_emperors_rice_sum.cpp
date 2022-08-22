/*
    Jeffrey D. Daye
    August 21st, 2022
    Chapter 4 - Exercise 9a (int)
    Calculating the grains of rice per square on a chessboard according to emperor story.
*/

#include <iostream>
#include <vector>

int main()
{
    constexpr int squares_on_board = 64;
    int previous = 1;
    int sum = 0;
    int previous_sum = 0;

    for(int square = 2; square < squares_on_board; square++) {
        previous_sum = sum;
        sum += previous * 2;
        if (sum <= previous_sum || sum > previous_sum + previous * 2) {
            std::cout << "Maximum of exactly " << previous_sum << " grains with " << square - 1 << " squares before overflow" << std::endl;
            break;
        }
        previous *= 2;
    }

    return 0;
}