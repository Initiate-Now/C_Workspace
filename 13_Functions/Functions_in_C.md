# Functions in C

Functions are reusable blocks of code that perform a specific task. They help structure a C program, reduce duplication, and make code easier to read, test, and maintain.

## Why use functions?
- Break a program into smaller pieces.
- Reuse code in multiple places.
- Make complex logic easier to understand.
- Separate tasks into meaningful names.

## Function components
A function in C has three main parts:
1. Return type
2. Function name
3. Parameter list

### Syntax
```c
return_type function_name(parameter_type1 param1, parameter_type2 param2, ...) {
    // function body
    return value; // if return_type is not void
}
```

### Example
```c
int add(int a, int b) {
    return a + b;
}
```

## Function declaration vs definition
- Declaration (prototype): tells the compiler about the function signature.
- Definition: provides the actual body of the function.

### Declaration example
```c
int add(int a, int b);
```

### Definition example
```c
int add(int a, int b) {
    return a + b;
}
```

## Calling a function
To use a function, write its name and pass arguments inside parentheses.

```c
#include <stdio.h>

int add(int a, int b);

int main() {
    int result = add(5, 3);
    printf("Result: %d\n", result);
    return 0;
}

int add(int a, int b) {
    return a + b;
}
```

## Return types
- `int`, `float`, `double`, `char`, etc.
- `void` if no value should be returned.

### Example with `void`
```c
void greet(void) {
    printf("Hello!\n");
}
```

## Parameters and arguments
- Parameters are variables in the function definition.
- Arguments are values passed when calling the function.

### Example
```c
void print_sum(int x, int y) {
    printf("Sum: %d\n", x + y);
}

int main() {
    print_sum(2, 4);
    return 0;
}
```

## Function scope and local variables
Variables declared inside a function are local to that function. They cannot be accessed outside it.

```c
void example(void) {
    int localValue = 10;
    // localValue exists only here
}
```

## Example: modular program structure
```c
#include <stdio.h>

int add(int a, int b);
int subtract(int a, int b);

int main(void) {
    int x = 10;
    int y = 5;
    printf("Add: %d\n", add(x, y));
    printf("Subtract: %d\n", subtract(x, y));
    return 0;
}

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}
```

## Tips
- Use descriptive names like `calculate_area` or `print_message`.
- Keep functions focused on a single task.
- Declare prototypes before `main()` when definitions come later.
- Group related functions together.

## Common function mistakes
- Forgetting to return a value for non-void functions.
- Mismatching parameter types between declaration and definition.
- Using uninitialized local variables.

## Summary
Functions are a core C feature for organizing code. Learn to declare, define, and call functions cleanly to build readable and maintainable programs.
