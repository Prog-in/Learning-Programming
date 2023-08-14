//

#include <iostream>
#include <vector>

int main() {
    std::vector<int> v1{10, 50, 31, 44, 52};
    int arr[v1.size()];

    for (decltype(v1.size()) i = 0; i < v1.size(); i++) {
        arr[i] = v1[i];
    }

    for (int i : arr) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}