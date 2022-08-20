/*
    Jeffrey D. Daye
    August 20th, 2022
    Chapter 4 - Exercise 3
    Program to compute sum, smallest, largest, and average distance of a list of distances between neighbouring cities.
*/

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<double> distances;
    double sum = 0;
    double largest = -9999999999999999;
    double smallest = 9999999999999999;

    std::cout << "Please enter a sequence of distances between two cities, terminated by '|': " << std::endl;

    for (double distance; std::cin >> distance;) {
        distances.push_back(distance);
        sum += distance;
        if (distance > largest) {
            largest = distance;
        }
        if (distance < smallest) {
            smallest = distance;
        }
    }

    std::cout << "Sum: " << sum << std::endl
        << "Largest: " << largest << std::endl
        << "Smallest: " << smallest << std::endl
        << "Average: " << sum / distances.size() << std::endl;

    return 0;
}