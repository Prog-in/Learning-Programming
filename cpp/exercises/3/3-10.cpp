// Write a program that reads a string of characters including punctuation
// and writes what was read but with the punctuation removed.

#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    for (char c : input)
        if (!ispunct(c))
            std::cout << c;
    std::cout << std::endl;

    return 0;
}