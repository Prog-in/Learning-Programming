#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<int> v1; // ivec holds objects of type int
    std::vector<std::vector<std::string>> v2; // vector whose elements are vectors
    std::vector<int> v1_cpy1(v1); // copy elements of v1 into v1_cpy1
    std::vector<int> v1_cpy2 = v1; // copy elements of v1 into v1_cpy2

    // list initialization
    std::vector<std::string> v3{"a", "an", "the"};  // list initialization
    //std::vector<std::string> v4("a", "an", "the");  // error
    
    // direct initialization
    std::vector<int> v5(10, -1);  // ten int elements, each initialized to -1
    std::vector<std::string> v6(10, "hi!");  // ten strings; each element is "hi!"
    std::vector<int> v7(10);  // ten elements, each initialized to 0
    std::vector<std::string> v8(10);  // ten elements, each initialized to the empty string

    // std::vector<int> vi = 10;  // error: must use direct initialization

    std::vector<int> vec;
    for (int i = 0; i < 100; i++) {
        vec.push_back(i);
    } // vec has 100 elements, values 0, 1, 2, ... , 99


    std::vector<unsigned int> scores(11, 0);  // 11 buckets, all initially 0
    unsigned int grade;
    while (std::cin >> grade) {
        if (grade <= 100) {
            ++scores[grade/10];  // increment the counter for the current cluster
        }
    }

    return 0;
}