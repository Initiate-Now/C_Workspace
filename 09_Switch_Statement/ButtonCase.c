/************************************
 * Name    : ButtonCase.c
 * Purpose : Imagine a button press system for a microcontroller.
 * Author  : Navin Chakravarthy Kamalakannan
 ************************************/
#include <stdio.h>

int main() {
    int button; 

    // User input for Button
    printf("Press 1 for LED ON\n");
    printf("Press 2 for LED OFF\n");
    printf("Press 3 for Buzzer\n");
    printf("Enter your Option: ");
    scanf("%d", &button);

    switch (button) {
        case 1:
            printf("LED ON\n");
            break;
        case 2:
            printf("LED OFF\n");
            break;
        case 3:
            printf("Buzzer ON\n");
            break;
        default:
            printf("Invalid Button\n");
    }

    return 0;
}
