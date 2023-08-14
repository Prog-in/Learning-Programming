// Write a program to read two strings and report whether the strings
// are equal. If not, report which of the two is larger. Now, change 
// the program to report whether the strings have the same length, 
// and if not, report which is longer.

#include <iostream>
#include <string>

int main() {
    std::string s1, s2;
    std::cout << "Enter String 1: " << std::endl;
    std::cin >> s1;
    std::cout << "Enter String 2: " << std::endl;
    std::cin >> s2;

    if (s1 == s2)
        std::cout << "Strings are equal." << std::endl;
    else if (s1 > s2)
        std::cout << "String 1 is greater than string 2." << std::endl;
    else
        std::cout << "String 2 is greater than string 1." << std::endl;
    
    if (s1.size() == s2.size())
        std::cout << "Strings are the same length." << std::endl;
    else if (s1.size() > s2.size())
        std::cout << "String 1 is longer than string 2." << std::endl;
    else
        std::cout << "String 2 is longer than string 1." << std::endl;

    return 0;
}