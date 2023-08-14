// Write an expression that tests four values, a, b, c, and d, and ensures
// that a is greater than b, which is greater than c, which is greater than d.

#include <iostream>

int main() {
    int a, b, c, d;
    std::cout << "Enter four numbers: " << std::endl;
    std::cin >> a >> b >> c >> d;

    if (a > b && b > c && c > d) {
        std::cout << "a is greater than b, which is greater than c, which is greater than d" 
                  << std::endl;
    } else {
        std::cout << "a is not greater than b, which is greater than c, which is greater than d" 
                  << std::endl;
    }

    return 0;
}