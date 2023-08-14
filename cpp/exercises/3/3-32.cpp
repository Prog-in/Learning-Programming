#include <iostream>
#include <vector>

void with_vectors(void);

void with_arrays(void);

int main() {
    with_arrays();
    with_vectors();

    return 0;
}

void with_vectors() {
    std::vector<int> vec, cpy;
    for (int i = 0; i < 10; i++) {
        vec.push_back(i);
    }
    for (int i = 0; i < 10; i++) {
        cpy.push_back(vec[i]);
    }

    for (auto i : cpy) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

}

void with_arrays() {
    int arr[10], cpy[10];
    for (int i = 0; i < 10; i++) {
        arr[i] = i;
    }
    for (int i = 0; i < 10; i++) {
        cpy[i] = arr[i];
    }

    for (auto i : cpy) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

}