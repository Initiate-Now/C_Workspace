/************************************
 * Name    : sizeof_Operator.c
 * Purpose : sizeof operator.
 * Author  : Navin Chakravarthy Kamalakannan
 ************************************/
#include <stdio.h>

int main() {
    int a;
    printf("Size of int: %lu bytes\n", sizeof(a));
    printf("Size of double: %lu bytes\n", sizeof(double));
    return 0;
}
