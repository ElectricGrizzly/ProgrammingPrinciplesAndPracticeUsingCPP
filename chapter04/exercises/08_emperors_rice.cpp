/*
    Jeffrey D. Daye
    August 21st, 2022
    Chapter 4 - Exercise 8
    Calculating the grains of rice per square up to target values.
*/

#include <iostream>
#include <vector>

int main()
{
    constexpr int squares_on_board = 64;
    std::vector<int> targets{ 1000, 1000000, 1000000000};
    std::vector<int> squares_for_target;
    int num_targets = targets.size();
    int targets_found = 0;
    int previous = 1;
    int sum = 0;

    for(int square = 2; square < squares_on_board; square++) {
        sum += previous * 2;
        previous *= 2;
        if(targets_found < num_targets && sum >= targets[targets_found]) {
            squares_for_target.push_back(square);
            targets_found++;
            if(targets_found == num_targets) {
                break;
            }
        }
    }

    for(long unsigned int i = 0; i < targets.size(); i++) {
        std::cout << squares_for_target[i] << " squares needed for at least " << targets[i] << " grains of rice." << std::endl;
    }

    return 0;
}