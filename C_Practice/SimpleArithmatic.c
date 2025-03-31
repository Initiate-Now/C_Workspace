/************************************
 * Name     : SimpleArithmatic.c
 * Category : Basic Data Types, Variables, Operators, and Input/Output.
 * Program  : Write a C program that takes two integers as input, performs
 *            addition, subtraction, multiplication, and division, and prints 
 *            the results in a formatted way.
 * Author   : Navin Chakravarthy Kamalakannan
 ************************************/
#include <stdio.h>

int main(){
    //Declare needed variables
    int num1, num2; 

    // Taking input from the user
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Performing arithmatic operations
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;

    //Handling division to avoid division by zero
    float quotient = 0.0;
    if (num2 != 0){
        quotient = (float)num1 / num2;
    }else{
        printf("Warning: Division by zero is not allowed!\n");
    }

    //Printing results in a formatted manner
    printf("\nResults :\n");
    printf("%d + %d = %d\n",num1, num2, sum);
    printf("%d - %d = %d\n",num1, num2, difference);
    printf("%d * %d = %d\n",num1, num2, product);
    if (num2 !=0){
        printf("%d / %d = %d\n",num1, num2, quotient);
    }
    
    return 0;
}