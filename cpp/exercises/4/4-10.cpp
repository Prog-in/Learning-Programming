// Write the condition for a while loop that would read ints from the
// standard input and stop when the value read is equal to 42.

#include <iostream>

int main() {
    int i;
    std::cout << "Enter a number (stop when the value read is equal to 42): " << std::endl;
    while (std::cin >> i && i != 42) {}
    return 0;
}