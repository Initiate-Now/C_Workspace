/************************************
 * Name    : FullPyramid.c
 * Purpose : Print the full pyramid pattern of stars.
 * Author  : Navin Chakravarthy Kamalakannan
 ************************************/
#include <stdio.h>

int main()
{
    int rows = 5;

    // first loop to print all rows
    for (int i = 0; i < rows; i++) {

        // inner loop 1 to print white spaces
        for (int j = 0; j < 2 * (rows - i) - 1; j++) {
            printf(" ");
        }

        // inner loop 2 to print star * character
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
