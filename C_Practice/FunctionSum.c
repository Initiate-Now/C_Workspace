/************************************
 * Name     : FunctionSum.c
 * Category : Functions - Declaration, Definition, and Calling
              Functions.
 * Program  : Write a C Program that takes two integers as 
              arguments and returns their sum. Call this 
              function from the main function and print the
              result.
 * Author   : Navin Chakravarthy Kamalakannan
 ************************************/
#include<stdio.h>

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2, result;

    // Input two integers from the user
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Call the add function
    result = add(num1,num2);

    // Print the result
    printf("Sum: %d\n", result);

    return 0;
}