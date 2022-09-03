/*
    Jeffrey D. Daye
    September 3rd, 2022
    Chapter 4 - Try This 4
    Print a table of characters and their corresponding integer value. This question asked to be
    completed with a for-loop and included the digits and uppercase letters. This was completed in
    the previous Try This.
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