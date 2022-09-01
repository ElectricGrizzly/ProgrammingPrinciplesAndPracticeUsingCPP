/*
    Jeffrey D. Daye
    August 30th, 2022
    Chapter 4 - Exercise 17
    Find the min, max, and mode of a sequence of strings.
*/

#include <iostream>
#include <unordered_map>

int main()
{
    std::unordered_map<std::string, int> counts;
    std::string mode = "";
    std::string smallest = "zzzzzzzzzzzzzzzz";
    std::string largest = "";
    std::cout << "Enter a series of strings seperated by spaces. Place '|' followed by pressing 'enter' to terminate:" << std::endl;

    for(std::string string; std::cin >> string && string != "|";) {
        if(counts.count(string) == 0) {
            counts[string] = 1;
        }
        else {
            counts[string] += 1;
        }
        if(counts[string] > counts[mode]) {
            mode = string;
        }
        if(string < smallest) {
            smallest = string;
        }
        if(string > largest) {
            largest = string;
        }
    }

    std::cout << "Mode: " << mode << std::endl;
    std::cout << "Largest: " << largest << std::endl;
    std::cout << "Smallest: " << smallest << std::endl;

    return 0;
}