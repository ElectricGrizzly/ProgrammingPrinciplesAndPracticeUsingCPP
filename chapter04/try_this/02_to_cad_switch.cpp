/*
    Jeffrey D. Daye
    September 3rd, 2022
    Chapter 4 - Try This 2
    Take a user entry of a number and symbol (representing currency) and convert to Canadian dollars*
    using a switch statement (completed in previous try this as well).
    * Conversion rates as of date of creation.
*/

#include <iostream>
#include <string>

int main()
{
    constexpr double cad_per_euro = 1.3072363;
    constexpr double cad_per_pound = 1.5123264;
    constexpr double cad_per_yen = 0.0093668906;
    constexpr double cad_per_yuan = 0.19039053;
    constexpr double cad_per_kroner = 0.17577468;

    double amount = 0;
    std::string amount_word = "";
    char currency = ' ';

    std::cout << "Enter a value and a currency seperated to convert it to Canadian dollars. Terminate with '|'." << std::endl;
    std::cout << "****Available Currencies****\n"
        << "CUR\tSYM\n"
        << "Euros\te\n"
        << "Pounds\tp\n"
        << "Yen\ty\n" 
        << "Kroner\tk\n"
        << "Yuan\tu\n" << std::endl;

    while (std::cin >> amount >> currency && amount != '|') {
        double cad = 0;

        switch (currency) {
            case 'e': case 'E':
                cad = amount * cad_per_euro;
                amount_word = "Euro";
                break;
            case 'p': case 'P':
                cad = amount * cad_per_pound;
                amount_word = "Pound";
                break;
            case 'y': case 'Y':
                cad = amount * cad_per_yen;
                amount_word = "Yen";
                break;
            case 'k': case 'K':
                cad = amount * cad_per_kroner;
                amount_word = "Krone";
                break;
            case 'u': case 'U':
                cad = amount * cad_per_yuan;
                amount_word = "Yuan";
                break;
            default:
                std::cout << "We can't convert that currency!" << std::endl;
                break;
        }

        std::cout << amount << " " << amount_word << " is " << cad << " Canadian\n" << std::endl;
    }

    return 0;
}