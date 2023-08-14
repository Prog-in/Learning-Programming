// Revise the loop that printed the first paragraph in text to instead
// change the elements in text that correspond to the first paragraph 
// to all uppercase. After you’ve updated text, print its contents.

#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> text;
    std::string line;

    while (getline(std::cin, line)) {
        text.push_back(line);
    }

    for (auto it = text.begin(); it != text.end() && !it->empty(); ++it) {
        for (auto& c : *it) {
            c = toupper(c);
        }
    }

    for (auto it = text.cbegin(); it != text.cend(); ++it) {
        std::cout << *it << std::endl;
    }

    return 0;
}