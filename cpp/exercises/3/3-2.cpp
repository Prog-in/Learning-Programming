// Write a program to read the standard input a line at a time. 
// Modify your program to read a word at a time.

#include <iostream>
#include <string>

void line(void);
void word(void);

int main() {
    //line();
    word();

    return 0;
}

void line() {
   std::string line;
   while (getline(std::cin, line)) {
       std::cout << line << std::endl;
   }
}

void word() {
   std::string word;
   while (std::cin >> word) {
       std::cout << word << std::endl;
   }
}