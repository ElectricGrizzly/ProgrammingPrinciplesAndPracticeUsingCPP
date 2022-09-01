/*
    Jeffrey D. Daye
    August 31st, 2022
    Chapter 4 - Exercise 20
    Take entry of name and value pairs and output the results. Print out score results by name
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

    std::cout << "Enter the name of the score you'd like to find (enter '|' to terminate): " << std::endl;
    while(std::cin >> name && name != "|") {
        if(names_scores.count(name) == 0) {
            std::cout << "Name not found!" << std::endl;
        }
        else {
            std::cout << "Score: " << names_scores[name] << std::endl;
        }
    }

    return 0;
}