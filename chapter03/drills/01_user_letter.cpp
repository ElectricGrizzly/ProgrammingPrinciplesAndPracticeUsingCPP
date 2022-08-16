/*
    Jeffrey D. Daye
    August 15th, 2022
    Chapter 3 - Drill 1
    Program that prints a message informing a viewer to check the terms folder.
*/

#include <iostream>
#include <string>

inline void simple_error(std::string s)	// write ``error: s and exit program
{
	std::cerr << "error: " << s << '\n';
	exit(1);
}

int main()
{
    std::string sender_name;
    std::string recipient_name;
    std::string friend_name;
    char friend_sex = 0;
    int recipient_age = 0;

    std::cout << "Enter the name of the sender of the letter (followed by 'enter'):\n";
    std::cin >> sender_name;

    std::cout << "Enter the name of the person you want to write to (followed by 'enter'):\n";
    std::cin >> recipient_name;

    std::cout << "Enter the age of the person you want to write to (followed by 'enter'):\n";
    std::cin >> recipient_age;

    if (recipient_age <= 0 || recipient_age >= 110) {
        simple_error("you're kidding!");
    }

    std::cout << "Enter the name of a friend you are both close to (followed by 'enter'):\n";
    std::cin >> friend_name;

    std::cout << "Enter the sex of this friend, m or f (followed by 'enter'):\n";
    std::cin >> friend_sex;

    std::cout << "\nDear " << recipient_name << ",\n";
    std::cout << "\tHow are you? I am fine and I miss you. I wish that we were closer\n"
        << "together. Please remember that I love you lots. Have you seen " << friend_name
        << " lately?\n"
        << "If you see " << friend_name << " please ask ";
    if (friend_sex == 'm') {
        std::cout << "him ";
    } else {
        std::cout << "her ";
    }
    std::cout << "to call me. I hear you just had a birthday\n" 
        << "and you are " << recipient_age << " years old.";
    if (recipient_age < 12) {
        std::cout << "Next year you will be " << recipient_age + 1 << ".";
    } else if (recipient_age == 17) {
        std::cout << "Next year you will be able to vote.";
    } else if (recipient_age > 70) {
        std::cout << "I hope you are enjoying retirement.";
    }
    std::cout << "\nYours sincerely,\n\n" << sender_name << std::endl;
    
    return 0;
}