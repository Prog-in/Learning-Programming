// Variable types supported by the C Language
#include <stdio.h>
#include <string.h>  // strcpy

int main() {
    char   character;
    int    integer;
    float  floatingPoint;
    double doublePrecision;
    char   string10chars[10] = "January"; // 9 chars + null zero ('/0')
    
    printf("Month: %s\n", string10chars);
    
    string10chars[0] = 'M';
    string10chars[1] = 'a';
    string10chars[2] = 'r';
    string10chars[3] = 'c';
    string10chars[4] = 'h';

    printf("Month: %s\n", string10chars);
    
    string10chars[5] = '\0';

    printf("Oops! Month: %s\n", string10chars);

    strcpy(string10chars, "April");  
    
    printf("Month: %s\n", string10chars);

    return 0;
}
