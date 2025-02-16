
/************************************
 * Name    : typeCast_Operator.c
 * Purpose : type cast  operator.
 * Author  : Navin Chakravarthy Kamalakannan
 ************************************/
#include <stdio.h>

int main() {
    int a = 5, b = 2;
    float result;

    result = (float) a / b; // Convert a to float before division
    printf("Result: %.2f\n", result);
    return 0;
}
