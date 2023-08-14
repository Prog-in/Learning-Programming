// Explain the behavior of the condition in the following if.
// const char *cp = "Hello World";
// if (cp && *cp)

#include <cstdio>

int main () {
    const char *cp = "Hello World";
    if (cp && *cp) {
        printf("cp is not a null pointer and *cp is not a null character\n");
    }

    return 0;
}