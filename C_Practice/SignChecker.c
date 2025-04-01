/************************************
 * Name     : SignChecker.c
 * Category : Control Flow - Conditional Statements (if, else, else if).
 * Program  : Write a C Program that takes an integer as input and 
              checks if it's positive, negative, or zero.
 * Author   : Navin Chakravarthy Kamalakannan
 ************************************/
#include <stdio.h>

int main(){
    int num;

    // Promt user for input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check if the number is positive, negative, or zero
    if (num > 0) {
        printf("The number is positive.\n");
    } else if (num < 0){
        printf("The number is negative.\n");
    } else {
        printf("The number is Zero.\n");
    }

    return 0;
}