#include <iostream>

int main() {
    int grade = 59;
    std::string final_grade1 = grade < 60 ? "fail" :
                                grade <= 75 ? "low pass" :
                                grade < 90 ? "pass" : "high pass";

    std::cout << "Grade: " << grade << " | Status: " << final_grade1 << std::endl;

    std::string final_grade2;
    if (grade < 60) {
        final_grade2 = "fail";
    } else if (grade <= 75) {
        final_grade2 = "low pass";
    } else if (grade < 90) {
        final_grade2 = "pass";
    } else {
        final_grade2 = "high pass";
    }

    std::cout << "Grade: " << grade << " | Status: " << final_grade1 << std::endl;

    return 0;
}