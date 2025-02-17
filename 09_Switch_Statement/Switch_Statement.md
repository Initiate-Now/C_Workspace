# Switch Statement in C
The switch statement is used when you have multiple possible values for a single variable and want to execute different blocks of code depending on which value matches.

## Syntax

    switch (expression) {
        case value1:
            // Code to execute if expression == value1
            break;
        case value2:
            // Code to execute if expression == value2
            break;
        case value3:
            // Code to execute if expression == value3
            break;
        default:
            // Code to execute if none of the cases match
    }
* The expression inside switch must evaluate to an integer or a character (not a float or string).
* Each case represents a possible value of the expression.
* The break statement is used to exit the switch after executing a case.
* The default case executes if no other case matches.

## Example 1: Simple switch-case

    #include <stdio.h>

    int main() {
        int day = 3;

        switch (day) {
            case 1:
                printf("Monday\n");
                break;
            case 2:
                printf("Tuesday\n");
                break;
            case 3:
                printf("Wednesday\n");
                break;
            case 4:
                printf("Thursday\n");
                break;
            case 5:
                printf("Friday\n");
                break;
            default:
                printf("Weekend!\n");
        }

        return 0;
    }
**Output:**

    Wednesday
Here, day = 3, so it matches case 3, and "Wednesday" is printed.

## Example 2: switch-case Without break (Fall-Through)
If break is missing, execution continues into the next case.

    #include <stdio.h>

    int main() {
        int num = 2;

        switch (num) {
            case 1:
                printf("One\n");
            case 2:
                printf("Two\n");
            case 3:
                printf("Three\n");
            default:
                printf("Default case\n");
        }

        return 0;
    }
**Output:**

    Two
    Three
    Default case
Since there is no break, execution falls through to the next cases.

## Key Takeaways
* Best for multiple discrete values (integers/characters).
* More efficient than multiple if-else for large cases.
* Use break to prevent fall-through.
* Always include default to handle unexpected values.
