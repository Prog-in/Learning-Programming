#include <iostream>

int main() {
    std::cout << "Size of int           (bytes) : " << sizeof(int)           << "\n"
              << "Size of long          (bytes) : " << sizeof(long)          << "\n"
              << "Size of long long     (bytes) : " << sizeof(long long)     << "\n"
              << "Size of double        (bytes) : " << sizeof(double)        << "\n"
              << "Size of long double   (bytes) : " << sizeof(long double)   << "\n"
              << "Size of float         (bytes) : " << sizeof(float)         << "\n"
              << "Size of char          (bytes) : " << sizeof(char)          << "\n"
              << "Size of bool          (bytes) : " << sizeof(bool)          << "\n"
              << "Size of unsigned      (bytes) : " << sizeof(unsigned)      << "\n"
              << "Size of unsigned long (bytes) : " << sizeof(unsigned long) << "\n"
              << "Size of (int) pointer (bytes) : " << sizeof(int *)         << std::endl;

    return 0;
}