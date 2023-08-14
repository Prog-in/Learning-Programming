// Read a sequence of words from cin and store the values a vector. 
// After you’ve read all the words, process the vector and change 
// each word to uppercase. Print the transformed elements, eight 
// words to a line.

#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> words;
    std::string word;

    while (std::cin >> word) {
        words.push_back(word);
    }
    for (std::string& s : words) {
        for (char& c : s) {
            c = toupper(c);
        }
    }

    bool did_endl = false;
    for (decltype(words.size()) i = 0; i < words.size(); i++) {
        std::cout << words[i] << " ";
        did_endl = false;
        if ((i + 1) % 8 == 0) {  // print 8 words per line
            std::cout << std::endl;
            did_endl = true;
        }
    }
    if (!did_endl) {
        std::cout << std::endl;
    }

    return 0;
}