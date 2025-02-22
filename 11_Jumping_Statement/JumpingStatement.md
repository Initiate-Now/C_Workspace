# Jumping Statements in C

In C, jumping statements are used to transfer control from one part of the program to another. These statements include:

1. break Statement
2. continue Statement
3. goto Statement
4. return Statement

## break Statement 

* Used to exit a loop or switch statement immediately.
* Commonly used in for, while, do-while, and switch statements.

**Example:**

    #include <stdio.h>

    int main() {
        for (int i = 1; i <= 5; i++) {
            if (i == 3) {
                break;  // Exits the loop when i == 3
            }
            printf("%d\n", i);
        }
        return 0;
    }

**Output:**

    1
    2

## continue Statement
* Skips the current iteration of a loop and moves to the next iteration.

**Example:**

    #include <stdio.h>

    int main() {
        for (int i = 1; i <= 5; i++) {
            if (i == 3) {
                continue;  // Skips printing 3
            }
            printf("%d\n", i);
        }
        return 0;
    }

**Output:**

    1
    2
    4
    5

## goto Statement
* Jumps to a labeled statement anywhere in the program.
* Generally not recommended due to reduced code readability.

**Example:**

    #include <stdio.h>

    int main() {
        int num = 1;

    start:
        printf("Number: %d\n", num);
        num++;

        if (num <= 3) {
            goto start;  // Jumps back to "start" label
        }

        return 0;
    }

**Output:**

    Number: 1
    Number: 2
    Number: 3

## return Statement
* Exits the function and optionally returns a value.

**Example:**

    #include <stdio.h>

    int add(int a, int b) {
        return a + b;  // Returns sum to caller
    }

    int main() {
        int result = add(5, 3);
        printf("Sum: %d\n", result);
        return 0;
    }

**Output:**

    Sum: 8

## Summary
Statement|Purpose
---|---
break|Exits a loop or switch
continue|Skips the current iteration of a loop
goto|Jumps to a labeled statement
return|Exits a function and returns a value