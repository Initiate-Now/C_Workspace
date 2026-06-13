/************************************
 * Name    : Sample_Array.c
 * Purpose : To demonstrate Array declaration, initialization and accessing elements.
 * Author  : Navin Chakravarthy Kamalakannan
 ************************************/
#include <stdio.h>

int main(void)
{
    /* Declare and initialize an array of integers */
    int numbers[] = {10, 20, 30, 40, 50};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    /* Access and print array elements */
    for (int i = 0; i < length; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    return 0;
}
