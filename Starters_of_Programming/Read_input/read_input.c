/************************************
 * Name    : read_input.c
 * Purpose : To read the inputs from the terminal
 * Author  : Navin Chakravarthy Kamalakannan
 ************************************/
#include <stdio.h>

int main() {
    char name[100];
    int age;
    printf("Enter your Age & Name :");
    scanf("%d %s", &age, name);

    printf("You entered: %d and %s\n", age, name);
    return 0;
}