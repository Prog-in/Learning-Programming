#include <iostream>

int get_size() { return 10; }

int main() {
    unsigned len1 = 42;
    constexpr unsigned len2 = 42;

    int arr[10];                   // array of 10 ints
    int *parr[len2];               // array of 42 pointers to int
    std::string bad[len1];         // error: cnt is not a constant expression
    std::string strs[get_size()];  // ok if get_size is constexpr, error otherwise
    // There are no arrays of references.

    const unsigned len3 = 3;

    int a1[len3] = {0,1,2};           // array of three ints with values 0, 1, 2
    int a2[] = {0, 1, 2};              // same as a2[3] = {0, 1, 2}
    int a3[5] = {0, 1, 2};             // same as a3[] = {0, 1, 2, 0, 0}
    std::string a4[3] = {"hi", "bye"}; // same as a4[] = {"hi", "bye", ""}
    //int a5[2] = {0,1,2};             // error: too many initializers

    char c1[] = {'C', '+', '+'};       // list initialization, no null
    char c2[] = {'C', '+', '+', '\0'}; // list initialization, explicit null
    char c3[] = "C++";                 // null terminator added automatically
    //const char c4[6] = "Daniel";     // error: no space for the null!

    int a[] = {0, 1, 2}; // array of three ints
    // int a2[] = a;     // error: cannot initialize one array with another
    // a2 = a;           // error: cannot assign one array to another

    int *ptrs[10];               // ptrs is an array of ten pointers to int
    // int &refs[10] = /* ? */;  // error: no arrays of references
    int (*Parray)[10] = &arr;    // Parray points to an array of ten ints
    int (&arrRef)[10] = arr;     // arrRef refers to an array of ten ints
    int *(&arry)[10] = ptrs;     // arry is a reference to an array of ten pointers

    // multidimensional arrays
    int ia[3][4] = {  
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}
    };
    // same as above
    int ia_alt[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};

    return 0;
}