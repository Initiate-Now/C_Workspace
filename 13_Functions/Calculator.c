/*
 * Name    : Calculator.c
 * Purpose : Simple calculator using switch-case and basic functions.
 * Author  : Navin Chakravarthy Kamalakannan
 */

#include <stdio.h>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
double divide(int a, int b);

int main(void)
{
    int num1, num2;
    char op;
    double result;

    printf("Simple Calculator\n");
    printf("Enter first number: ");
    if (scanf("%d", &num1) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    if (scanf("%d", &num2) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    switch (op) {
        case '+':
            result = add(num1, num2);
            printf("%d + %d = %.2f\n", num1, num2, result);
            break;
        case '-':
            result = subtract(num1, num2);
            printf("%d - %d = %.2f\n", num1, num2, result);
            break;
        case '*':
            result = multiply(num1, num2);
            printf("%d * %d = %.2f\n", num1, num2, result);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                result = divide(num1, num2);
                printf("%d / %d = %.2f\n", num1, num2, result);
            }
            break;
        default:
            printf("Unknown operator '%c'. Use +, -, *, or /.\n", op);
            break;
    }

    return 0;
}

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

double divide(int a, int b)
{
    return (double)a / b;
}
