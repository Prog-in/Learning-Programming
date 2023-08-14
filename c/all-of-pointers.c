// a pointer is just a number that happens to be an adress!
//

#include <stdio.h>

int main() {
    int x = 4;
    int *px = &x;  // integer pointer named px is set to the address of x
    int y = *px;   // integer named y is set to the thing pointed by px

    return 0;
}
