/************************************
 * Name     : SumOfArray.c
 * Category : Arrays - Declaration, Initialization, 
              and Accessing Array Elements.
 * Program  : Write a C Program that takes five integer inputs
              from the user and stores them in an array. Then,
              calculate and print the sum of all elements in
              the array. 
 * Author   : Navin Chakravarthy Kamalakannan
 ************************************/
#include<stdio.h>

int main() {
    int numbers[5];
    int sum = 0;

    // Taking 5 integer inputs from the user
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Number %d: ",i+1);
        scanf("%d", &numbers[i]);
    }

    // calculating the sum of all elements
    for (int i = 0; i < 5; i++) {
        sum += numbers[i];
    }

    // Printing the sum
    printf("The sum of the entered numbers is: %d\n", sum);

    return 0;
}