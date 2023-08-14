#include <iostream>
#include <cstring>

int main() {
    const char p_string1[] = "Hello, ";
    const char p_string2[] = "World";

    char p_string3[sizeof(p_string1) + sizeof(p_string2) - 1];
    strcpy(p_string3, p_string1);
    strcat(p_string3, p_string2);

    std::cout << p_string3 << std::endl;    

    return 0;
}