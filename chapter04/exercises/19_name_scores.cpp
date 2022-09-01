/*
    Jeffrey D. Daye
    August 31st, 2022
    Chapter 4 - Exercise 19
    Take entry of name and value pairs and output the results.
*/

#include <iostream>
#include <unordered_map>
#include <string>

int main()
{
    std::string name = "";
    int score = 0;
    std::unordered_map<std::string, int> names_scores;

    std::cout << "Enter a name followed by a score (enter 'NoName 0' to terminate): " << std::endl;
    while(std::cin >> name >> score && (name != "NoName" || score != 0)) {
        if(names_scores.count(name) == 0) {
            names_scores[name] = score;
        }
        else {
            std::cout << "That name has already been entered. Terminating!" << std::endl;
            break;
        }
    }

    for (auto name: names_scores) {
        std::cout << "Name: " << name.first << "\tScore: " << name.second << std::endl;
    }

    return 0;
}