/************************************
 * Name    : factorial.c
 * Purpose : Factorial Calculation.
 * Author  : Navin Chakravarthy Kamalakannan
 ************************************/
#include <stdio.h>

int main() {
    int num, factorial = 1, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    i = num;
    do {
        factorial *= i;
        i--;
    } while (i > 0);

    printf("Factorial of %d is %d\n", num, factorial);
    return 0;
}
