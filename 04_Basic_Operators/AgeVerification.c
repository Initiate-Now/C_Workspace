/************************************
 * Name    : AgeVerification.c
 * Purpose : To Demostrate Relational Operator, Check if a person is eligible to vote.
 * Author  : Navin Chakravarthy Kamalakannan
 ************************************/
#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are eligible to vote.\n");
    } else {
        printf("You are NOT eligible to vote.\n");
    }
    return 0;
}
