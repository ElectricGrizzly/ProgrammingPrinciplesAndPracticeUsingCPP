/*
    Jeffrey D. Daye
    August 31st, 2022
    Chapter 4 - Exercise 22
    Take entry of name and value pairs and output the results. Print out results by score,
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

    std::cout << "Enter the score you'd like to find the names of (enter '|' to terminate): " << std::endl;
    while(std::cin >> score) {
        bool found = false;
        for(auto name_score: names_scores) {
            if (name_score.second == score) {
                std::cout << name_score.first << " ";
                found = true;
            }
        }
        if(!found) {
            std::cout << "Score not found!";
        }
        std::cout << std::endl;
    }

    return 0;
}