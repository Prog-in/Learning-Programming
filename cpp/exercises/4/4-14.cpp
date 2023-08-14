// The following assignment is illegal. Why? How would you correct it?
// double dval; int ival; int *pi;
// dval = ival = pi = 0;

#include <iostream>

int main() {
    double dval; int ival; int *pi;
    dval = ival = 0;
    pi = nullptr;

    std::cout << "dval = " << dval << " | ival = " << ival << " | pi = " << pi << std::endl;

    return 0;
}