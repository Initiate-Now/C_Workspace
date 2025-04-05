/************************************
 * Name     : PointerInC.c
 * Category : Pointers - Declaration, Initialization,
              Dereferencing, and Basic Pointer Arithmetic.
 * Program  : Write a C Program that declares two integer
              variables and a pointer to an integer. Make
              the pointer point to one of the integer variables,
              change the value of the integer variable using the
              pointer, and print the original and modified values. 
 * Author   : Navin Chakravarthy Kamalakannan
 ************************************/
#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int *ptr; // pointer to an integer

    printf("Before modification:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    ptr = &a; // make the pointer point to variable a
    *ptr = 50;  // modify the value of a using the pointer

    printf("\nAfter modification through pointer:\n");
    printf("a = %d\n", a);  // a is modified
    printf("b = %d\n", b);  // b remains unchanged

    return 0;
}