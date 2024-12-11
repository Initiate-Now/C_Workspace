/************************************
 * Name    : enum_SkippingValues.c
 * Purpose : To verify enum datatype by skipping the contents values.
 * Author  : Navin Chakravarthy Kamalakannan
 ************************************/

#include <stdio.h>

enum Numbers {
    A = 1,  // 1
    B,      // 2 (automatically incremented)
    C = 5,  // 5
    D       // 6 (automatically incremented from 5)
};

int main() {
    printf("A: %d\n", A); // Output: 1
    printf("B: %d\n", B); // Output: 2
    printf("C: %d\n", C); // Output: 5
    printf("D: %d\n", D); // Output: 6

    return 0;
}
