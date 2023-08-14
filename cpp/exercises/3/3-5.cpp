// Write a program to read strings from the standard input, concatenating 
// what is read into one large string. Print the concatenated string. Next, 
// change the program to separate adjacent input strings by a space.

#include <iostream>
#include <string>

void strings(void);
void words(void);

int main() {
    strings();
    words();

    return 0;
}

void strings() {
    std::string s1, s2, s3;
    std::cout << "Enter String 1: " << std::endl;
    std::cin >> s1;
    std::cout << "Enter String 2: " << std::endl;
    std::cin >> s2;

    s3 = s1 + s2;

    std::cout << "Concatenated string: " << s3 << std::endl;
}

void words() {
    std::string s1, s2, s3;
    std::cout << "Enter Strings 1 & 2: " << std::endl;
    std::cin >> s1 >> s2;

    s3 = s1 + s2;

    std::cout << "Concatenated string: " << s3 << std::endl;
}