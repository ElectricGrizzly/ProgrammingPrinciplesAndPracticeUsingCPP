/*
    Jeffrey D. Daye
    September 3rd, 2022
    Chapter 4 - Try This 3
    Print a table of characters and their corresponding integer value.
*/

#include <iostream>

int main()
{
    std::cout << "CHAR\tINT" << std::endl;

    for (char character = ' '; character <= '~'; character++) {
        std::cout << "'" << character << "'\t" << int(character) << std::endl;
    }

    return 0;
}