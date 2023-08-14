#include <iostream>
#include <string>

int get_user_birth_year() {
    std::cout << "Enter your birth year: ";
    int year;
    std::cin >> year;
    return year;
}

int main() {
    std::string s1;           // default initialization; s1 is the empty string
    std::string s2 = s1;      // s2 is a copy of s1
    std::string s3 = "hiya";  // s3 is a copy of the string literal
    std::string s4(10, 'c');  // s4 is cccccccccc

    std::cout << "s1: " << s1 << "\ns2: " << s2 << "\ns3: " << s3 << "\ns4: " << s4 << std::endl;

    std::string s5 = "hiya";  // copy initialization
    std::string s6("hiya");   // direct initialization
    std::string s7(10, 'c');  // direct initialization; s7 is cccccccccc

    std::string s8 = std::string(10, 'c'); // copy initialization; s8 is cccccccccc
    /*Equivalent to:
    string temp(10, ’c’); // temp is cccccccccc
    string s8 = temp; // copy temp into s8
    (no compensating advantage over the way we initialized s7)
    */

    return 0;
}