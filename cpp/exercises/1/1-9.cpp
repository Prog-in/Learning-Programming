#include <iostream>

int main() {
    int tot = 0;
    for (int i = 50; i <= 100; i++) {
        tot += i;
    }
    std::cout << "50 + 51 + 52 + ... + 100 = " << tot << std::endl;
    return 0;
}
