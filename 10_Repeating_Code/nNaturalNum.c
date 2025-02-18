/************************************
 * Name    : nNaturalNum.c
 * Purpose : Print the given N number of Natual Numbers using for loop.
 * Author  : Navin Chakravarthy Kamalakannan
 ************************************/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]) {
    if (argc < 2) {  // Check if argument is passed
        printf("Usage: %s <number>\n", argv[0]);
        return 1;  // Exit with an error code
    }

    int n = atoi(argv[1]);  // Convert string to integer

    // Validate input
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    // Loop to print numbers from 1 to n
    for (int i = 1; i <= n; i++)
           printf("%d ", i);

    return 0;
}
