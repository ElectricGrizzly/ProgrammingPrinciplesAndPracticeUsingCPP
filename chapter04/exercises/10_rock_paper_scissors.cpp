/*
    Jeffrey D. Daye
    August 21st, 2022
    Chapter 4 - Exercise 10
    Rock, Paper, Scissors game.
*/

#include <iostream>
#include <random>
#include <vector>
#include <string>

char computer_play()
{
    std::vector<char> choices{'r', 'p', 's'};
    return choices[std::rand() % choices.size()];
}

std::string selection_to_word(char selection) 
{
    switch(selection) {
        case 'r':
            return "Rock";
        case 'p':
            return "Paper";
        case 's':
            return "Scissors";
        default:
            std::cout << "Not a valid selection character. Returning 'ROCK'" << std::endl;
            return "Rock";
    }
}

int main()
{
    char selection = ' ';
    int player_score = 0;
    int computer_score = 0;

    std::cout << "Rock, Paper, Scissors" << std::endl;
    std::cout << "Enter 'r' (rock), 'p' (paper), or 's' (scissors). Enter '|' to quit." << std::endl;

    while(std::cin >> selection && selection != '|') {
        char play = computer_play();
        std::cout << "PLAYER\tvs.\tCOMPUTER" << std::endl;
        std::cout << selection_to_word(selection) << "\tvs.\t" << selection_to_word(play) << std::endl;
        switch(selection) {
            case 'r':
                switch(play) {
                    case 'r':
                        std::cout << "Tie!" << std::endl;
                        player_score++;
                        computer_score++;
                        break;
                    case 'p':
                        std::cout << "Computer Wins!" << std::endl;
                        computer_score++;
                        break;
                    case 's':
                        std::cout << "Player Wins!" << std::endl;
                        player_score++;
                        break;
                }
                break;
            case 'p':
                switch(play) {
                    case 'r':
                        std::cout << "Player Wins!" << std::endl;
                        player_score++;
                        break;
                    case 'p':
                        std::cout << "Tie!" << std::endl;
                        player_score++;
                        computer_score++;
                        break;
                        
                    case 's':
                        std::cout << "Computer Wins!" << std::endl;
                        computer_score++;
                        break;
                }
                break;
            case 's':
                switch(play) {
                    case 'r':
                        std::cout << "Computer Wins!" << std::endl;
                        computer_score++;
                        break;
                    case 'p':
                        std::cout << "Player Wins!" << std::endl;
                        player_score++;
                        break;
                    case 's':
                        std::cout << "Tie!" << std::endl;
                        player_score++;
                        computer_score++;
                        break;
                        
                }
                break;
        }
        std::cout << "Player Score: " << player_score << "\nComputer Score: " << computer_score << std::endl;
        std::cout << std::endl;
    }
    std::cout << std::endl << "Player Score: " << player_score << "\nComputer Score: " << computer_score << std::endl;
    if(player_score > computer_score) {
        std::cout << "Player Wins the Game!" << std::endl;
    }
    else if(player_score < computer_score) {
        std::cout << "Computer Wins the Game!" << std::endl;
    }
    else {
        std::cout << "Tie Game!" << std::endl;
    }

    return 0;
}