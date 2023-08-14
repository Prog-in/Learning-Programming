#include <iostream>
#include <sstream>
#include <vector>
#include <string>

void comp_arrays(void);

void comp_vectors(void);

int main() {
    //comp_arrays();
    comp_vectors();

    return 0;
}

void comp_arrays() {
    constexpr int n = 5;
    int ar1[n];
    int ar2[n];

    std::cout << "Enter " << n << " integers for the first array : ";
    for (int i = 0; i < n; i++) {
        std::cin >> ar1[i];
    }

    std::cout << "Enter " << n << " integers for the second array: ";
    for (int i = 0; i < n; i++) {
        std::cin >> ar2[i];
    }

    bool equal = true;
    for (int i = 0; i < n; i++) {
        if (ar1[i] != ar2[i]) {
            equal = false;
            break;
        }
    }

    if (equal) {
        std::cout << "Arrays are equal" << std::endl;
    } else {
        std::cout << "Arrays are not equal" << std::endl;
    }
}

void comp_vectors() {
    std::vector<int> v1;
    std::vector<int> v2;
    std::string line;
    int i;

    std::cout << "Enter integers for the first vector : ";
    getline(std::cin, line);
    std::istringstream stream(line);
    while (stream >> i) {
        v1.push_back(i);
    }

    stream.clear();
    std::cout << "Enter integers for the second vector: ";
    getline(std::cin, line);
    stream.str(line);
    while (stream >> i) {
        v2.push_back(i);
    }

    bool equal = true;

    if (v1.size() != v2.size()) {
        equal = false;
    }

    if (equal) {
        for (decltype(v1.size()) i = 0; i < v1.size(); i++) {
            if (v1[i] != v2[i]) {
                equal = false;
                break;
            }
        }
    }

    if (equal) {
        std::cout << "Vectors are equal" << std::endl;
    } else {
        std::cout << "Vectors are not equal" << std::endl;
    }
}