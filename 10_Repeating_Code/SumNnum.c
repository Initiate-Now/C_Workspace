/************************************
 * Name    : SumNnum.c
 * Purpose : Print the sum of N natural numbers.
 * Author  : Navin Chakravarthy Kamalakannan
 ************************************/
#include <stdio.h>

int main() {
    int sum = 0, i = 1;

    while (i <= 10) {
      
        // Add the current value of i to sum
        sum += i;
      
        // Increment i
        i++;       
    }

    printf("%d", sum);
    return 0;
}
