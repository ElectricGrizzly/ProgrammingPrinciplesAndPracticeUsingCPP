/*
    Jeffrey D. Daye
    September 3rd, 2022
    Chapter 4 - Try This 6
    Bleep out words a user enters if they are disliked words.
*/

#include <iostream>
#include <vector>
#include <string>

void create_disliked_words (std::vector<std::string> &disliked, std::string terminator)
{
    for (std::string word; std::cin >> word && word != terminator;) {
        disliked.push_back(word);
    }
}

void filter_entered_words (std::vector<std::string> &disliked, std::string terminator)
{
    for (std::string word; std::cin >> word && word != terminator;) {
        bool found = false;
        for (std::string disliked_word: disliked) {
            if (word == disliked_word) {
                std::cout << "BLEEP ";
                found = true;
            }
        }
        if (!found) {
            std::cout << word << " ";
        }
    }
    std::cout << std::endl;
}

void create_terminator (std::string &terminator)
{
    std::cin >> terminator;
}

void bleep_words ()
{
    std::vector<std::string> disliked_words;
    std::string terminator;

    std::cout << "Enter the string or character you would like to use to terminate you inputs! The press 'Enter'" << std::endl;
    create_terminator(terminator);

    std::cout << "Enter the words you dislike! Enter '" << terminator << "' to stop entering words" << std::endl;
    create_disliked_words(disliked_words, terminator);

    std::cout << "Enter words and we will BLEEP them for you! Enter '" << terminator << "' to stop entering words" << std::endl;
    filter_entered_words(disliked_words, terminator);
}

int main()
{
    bleep_words();

    return 0;
}