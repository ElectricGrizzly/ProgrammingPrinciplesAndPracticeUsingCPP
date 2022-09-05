/*
    Jeffrey D. Daye
    September 4th, 2022
    Chapter 3 - Try This 5
    Testing what happens with values as they are converted.
*/

#include <iostream>

int main()
{
    double d = 0;
    while (std::cin >> d) {
        int i = d;
        char c = i;
        int i2 = c;
        std::cout << "double == " << d << std::endl
            << "integer == " << i << std::endl
            << "integer2 == " << i2 << std::endl
            << "char(" << c << ")\n" << std::endl;
    }

    return 0;
}