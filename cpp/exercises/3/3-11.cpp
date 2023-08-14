// Is the following range for legal? If so, what is the type of c?

#include <iostream>
#include <string>

int main() {
    const std::string s = "Keep out!";
    for (auto &c : s) { 
        std::cout << c << std::endl;
        //c = 'X'; // error: assignment of read-only reference ‘c’
    }    
    return 0;
}