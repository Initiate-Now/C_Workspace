/************************************
 * Name     : CalculateFactorial.c
 * Category : Control Flow - Loops (for, while, do-while).
 * Program  : Write a C Program that calculates the factorial 
              of a given positive integer using a for loop.
 * Author   : Navin Chakravarthy Kamalakannan
 ************************************/
#include <stdio.h>

int main() {
    int num;

    unsigned long long factorial = 1; // using unsigned long long to handle Large numbers

    // Taking input from user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check if the number is non-negative
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // calculate factorial using for-loop
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }

        printf("Factorial of %d = %llu\n", num, factorial);
    }

    return 0;
}