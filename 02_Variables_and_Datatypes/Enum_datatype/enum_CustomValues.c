/************************************
 * Name    : enum_CustomValues.c
 * Purpose : To define custom values for the enum contents.
 * Author  : Navin Chakravarthy Kamalakannan
 ************************************/

#include <stdio.h>

enum Status {
    SUCCESS = 0,
    FAILURE = -1,
    IN_PROGRESS = 1
};

int main() {
    enum Status taskStatus;

    taskStatus = FAILURE;

    printf("Task Status: %d\n", taskStatus); // Output: -1

    return 0;
}