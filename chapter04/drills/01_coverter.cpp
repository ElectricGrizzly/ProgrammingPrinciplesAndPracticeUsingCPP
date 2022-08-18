/*
    Jeffrey D. Daye
    August 18th, 2022
    Chapter 4 - Drill 1
    Program that converts entered values and units into meters and displays statistics about entered values.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

double convert_to_meters(double value, std::string unit)
{
    constexpr double cm_in_in = 2.54;
    constexpr double cm_in_m = 100;
    constexpr double in_in_ft = 12;

    if (unit == "cm") {
        return value / cm_in_m;
    }
    else if (unit == "in") {
        return value * cm_in_in / cm_in_m;
    }
    else if (unit == "ft") {
        return value * in_in_ft * cm_in_in / cm_in_m;
    }
    else {
        return value;
    }
}

int main()
{   
    double value = 0;
    std::vector<double> values;
    double conversion = 0;
    std::string unit;

    double largest = -9999999999999999;
    std::string largest_unit = "m";

    double smallest = 9999999999999999;
    std::string smallest_unit = "m";

    double sum = 0;
    std::string sum_unit = "m";

    int values_entered = 0;

    std::cout << "Please enter a floating-point value. Enter '|' to quit: " << std::endl;

    while (std::cin >> value >> unit && value != '|') {
        if (unit != "cm" && unit != "m" && unit != "in" && unit != "ft") {
            std::cout << "Please enter a valid unit!\n" << std::endl;
            continue;
        }
        
        std::cout << "You entered " << value << unit << std::endl;

        values_entered++;

        conversion = convert_to_meters(value, unit);
        values.push_back(conversion);
        sum += conversion;

        if (conversion > convert_to_meters(largest, largest_unit)) {
            largest = value;
            largest_unit = unit;
        }
        if (conversion < convert_to_meters(smallest, smallest_unit)) {
            smallest = value;
            smallest_unit = unit;
        }

        std::cout << std::endl;
    }
    std::sort(values.begin(), values.end());
    std::cout << "Largest: " << largest << largest_unit << std::endl;
    std::cout << "Smallest: " << smallest << smallest_unit << std::endl;
    std::cout << "Sum: " << sum << sum_unit << std::endl;
    std::cout << "Number Entered: " << values_entered << std::endl;
    std::cout << "Values Entered:" << std::endl;
    for (double entry : values) {
        std::cout << entry << sum_unit << " ";
    }

    return 0;
}