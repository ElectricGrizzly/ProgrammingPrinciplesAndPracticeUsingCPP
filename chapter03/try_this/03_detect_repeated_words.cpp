/*
    Jeffrey D. Daye
    September 4th, 2022
    Chapter 3 - Try This 3
    Detect repeated words* from a given sentence.
    * Word with matching case. Example She != she.
*/

#include <iostream>
#include <string>

int main()
{
    std::string previous = " ";
    std::string current = " ";

    while (std::cin >> current) {
        if (previous == current) {
            std::cout << "Repeated word: " << current << "\n";
        }

        previous = current;
    }

    return 0;
}