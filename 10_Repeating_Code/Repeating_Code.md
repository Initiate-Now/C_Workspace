# Repeating Code in C (Loops)
In C, repeating a block of code multiple times is done using loops. The main types of loops in C are:

1. for Loop → Used when the number of iterations is known.
2. while Loop → Used when the number of iterations is unknown and based on a condition.
3. do-while Loop → Similar to while, but runs at least once before checking the condition.
4. Nested Loops → Loops inside loops for handling multi-dimensional iterations.

## for Loop
The for loop is useful when you know the exact number of iterations.

Syntax:

    for (initialization; condition; update) {
        // Code to repeat
    }

## while Loop
The while loop is used when the number of iterations is not fixed.

Syntax:

    while (condition) {
        // Code to repeat
    }

## do-while Loop
The do-while loop is guaranteed to run at least once even if the condition is false.

Syntax:

    do {
        // Code to repeat
    } while (condition);

## Nested Loops (Loops Inside Loops)
Useful for handling multi-dimensional problems like matrices or patterns.

Example: Print a 3x3 star pattern

    #include <stdio.h>

    int main() {
        for (int i = 1; i <= 3; i++) {   // Outer loop
            for (int j = 1; j <= 3; j++) {  // Inner loop
                printf("* ");
            }
            printf("\n"); // New line after each row
        }
        
        return 0;
    }
Output:


    * * *
    * * *
    * * *
🔹 How it works?

The outer loop runs for rows (i from 1 to 3).
The inner loop prints * for each column (j from 1 to 3).
## Infinite Loops
An infinite loop runs forever until manually stopped.

Example 1: Using for

    for(;;) { 
        printf("This is an infinite loop\n");
    }
Example 2: Using while

    while(1) {
        printf("Running forever\n");
    }
**Note:** Use break to stop the loop when needed!

## Conclusion
Loop Type|When to Use
---|---
for loop|When number of iterations is known.
while loop|When iterations depend on a condition.
do-while loop|When code must run at least once.
nested loops|When dealing with matrices, patterns, etc.