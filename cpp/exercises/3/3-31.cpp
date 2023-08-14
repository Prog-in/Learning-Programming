#include <iostream>

int main() {
    int arr[10];
    for (int i = 0; i < 10; i++) {
        arr[i] = i;
    }

    for (auto i : arr) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}