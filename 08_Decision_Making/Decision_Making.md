# Decision Making in C
Decision-making in C allows the program to execute a particular set of statements based on conditions. The primary decision-making constructs in C include:

1) if Statement
2) if-else Statement
3) Nested if Statement
4) if-else-if Ladder
5) switch Statement
6) Ternary Operator (?:)

## if Statement
The if statement executes a block of code only if the condition is true.

Syntax:

    if (condition) {
        // Code to execute if condition is true
    }

## if-else Statement
The if-else statement executes one block if the condition is true, otherwise executes another block.

Syntax:

    if (condition) {
        // Code if condition is true
    } else {
        // Code if condition is false
    }

## Nested if Statement
An if statement inside another if is called a nested if.

Syntax:

    if (condition1) {
        if (condition2) {
            // Code if both conditions are true
        }
    }

## if-else-if Ladder
Used when multiple conditions need to be checked sequentially.

Syntax:

    if (condition1) {
        // Code for condition1
    } else if (condition2) {
        // Code for condition2
    } else if (condition3) {
        // Code for condition3
    } else {
        // Default case
    }

## switch Statement
The switch statement is used when one variable is compared against multiple values.

Syntax:

    switch (expression) {
        case value1:
            // Code for case 1
            break;
        case value2:
            // Code for case 2
            break;
        default:
            // Default case if no match
    }

## Ternary Operator (?:)
The ternary operator is a shorthand for if-else.

Syntax:

    condition ? expression_if_true : expression_if_false;

## Conclusion
C provides several ways to implement decision-making logic:

* Use if for simple checks.
* Use if-else for two-way decisions.
* Use if-else-if for multiple conditions.
* Use switch for cases with multiple constant values.
* Use the ternary operator for concise expressions.