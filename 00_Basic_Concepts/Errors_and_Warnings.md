# Errors and Warnings in C

 In C programming, errors and warnings are messages generated by the compiler during code compilation. They help developers identify issues in the code that need fixing.

## Types of Errors in C

### Compilation Error 

 * General errors detected during compilation.

 * Types - Syntax error & Semantic error

 * **Syntax Error:** Violations of language syntax rules. For example, 
    
        int a=10

    missing Semicolon

* **Sematic Error:** Code is syntactically correct but logically invalid. For example, Calling an undeclared function.

### Linker Error

* The linker is having trouble linking all the object files together to create an executable.

* usually there is a library or object file that is missing.

### Runtime Error

* Erros that occur when the program is executing.
* Example

        int main() {
            int x = 5 / 0;  // Division by zero
            return 0;
        }

* can cause your program to crash.

### Logic Error

* Errors or bugs in your code that cause your program to run incorrectly.

* Logic errors are mistakes made by the programmer.

## Warnings in C

* Warnings indicate potential issues in the code that may not prevent compilation but could lead to unexpected behavior. 

* Warnings do not stop compilation but should be addressed to avoid bugs.

* **NOTE :** Do not ignore any warnings geneated by the compiler.

* Example

        int main() {
            int a = 3.14;  // Assigning float to int
            return 0;
        }

    Warning Output:

        warning: implicit conversion from 'double' to 'int'


