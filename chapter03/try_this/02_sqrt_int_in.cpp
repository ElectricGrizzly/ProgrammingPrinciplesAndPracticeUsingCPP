/*
    Jeffrey D. Daye
    September 4th, 2022
    Chapter 3 - Try This 2
    Test operations while reading in an int.
*/

#include <iostream>
#include <cmath>

int main()
{
    int n = 0;
    double m = 0;
    std::cout << "Please enter an integer value: ";
    std::cin >> n;
    m = n;

    std::cout << " == " << n
        << "\nn+1 == " << n + 1
        << "\nthree times n == " << 3*n
        << "\ntwice n == " << n+n
        << "\nn squared == " << n*n
        << "\nhalf of n == " << n/2
        << "\nsquare root of n == " << sqrt(n)
        << "\n";

    return 0;
}