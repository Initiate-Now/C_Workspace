# Conditional Operator in C

The conditional operator (also known as the ternary operator) is a shorthand way of writing an if-else statement in C. It is represented by the ? : syntax and is the only ternary operator in C.

## Syntax:

    condition ? expression1 : expression2;
* If condition is true (nonzero), expression1 is evaluated and returned.
* If condition is false (zero), expression2 is evaluated and returned.

## Advantages of the Conditional Operator
* Shortens code: Reduces multiple lines of if-else into a single line.
* Improves readability: When used correctly, it makes the code concise.

## Disadvantages
* Reduced readability for complex conditions: Nested ternary operators can be hard to understand.
* Harder to debug: If conditions become too complex, if-else might be clearer.