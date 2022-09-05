/*
    Jeffrey D. Daye
    September 4th, 2022
    Chapter 3 - Try This 4
    Find and resolve errors in the given code.
*/

/*
    ******** GIVEN CODE ********

    #include <iostream>
    #include <string>

    int Main()
    {
        std::STRING s = "Goodbye, cruel world! ";
        std::cOut << S << '\n';
    }
*/

/*
    ******** ERRORS RESOLVED ********

    1. STRING should be string
    2. cOut should be cout
    3. S should be s
    4. No return 0 for main function (int function returns nothing)
    5. Main should be main
*/

#include <iostream>
#include <string>

int main()
{
    std::string s = "Goodbye, cruel world! ";
    std::cout << s << '\n';

    return 0;
}