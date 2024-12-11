# Structure of C

The structure of a C program consists of specific components arranged in a particular order. Understanding the structure helps organize the program efficiently and makes it easier to compile and debug.

## Components of a C Program

### 1. Preprocessor Directives
* Preprocessor directives are commands that begin with a **"#"** symbol.
* They are processed before compilation.
* Common preprocessor directives include:
    * #include: Includes header files (e.g., #include <stdio.h> for standard I/O).
    * #define: Defines macros or constants.

* Example:

        #include <stdio.h>  // Includes standard input-output library
        #define PI 3.14159  // Defines a constant for PI

### 2. Global Declarations

* Variables or functions declared outside any function are global.
* They can be accessed from any function within the program.
* Example:

        int global_variable = 10;  // Global variable

### 3. Function Prototypes (Declarations)

* A function prototype informs the compiler about the function's name, return type, and parameters.
* It allows a function to be called before its definition.
* Syntax:

        return_type function_name(arguments);

* Example:

        void display();  // Function prototype

### 4. The main() Function

* The main() function is the entry point of every C program.
* Execution starts from the main() function.
* It must return an integer value (int) to indicate success or failure.
* Structure of main() Function:

        int main() {
            // Variable declarations
            // Program logic/statements
            return 0;
        }

### 5. Local Declarations

* Variables declared inside a function are local to that function.
* They can only be accessed within the function where they are defined.
* Example:

        int main() {
            int local_var = 5;  // Local variable
            printf("Local variable: %d\n", local_var);
            return 0;
        }

### 6. Program Statements

* Program statements contain the logic or instructions to perform specific tasks.
* Common statements include:
   * **Function calls:** Invoke a function.
   * **Control statements:** if, for, while, etc.
   * **Input/Output:** printf, scanf.
* Example:

        printf("Hello, World!\n");

### 7. Function Definitions

* Functions contain reusable blocks of code that perform a specific task.

* A function definition includes:
  * Return type
  * Function name
  * Parameters (optional)
  * Body (code enclosed in {})

* Syntax:

        return_type function_name(arguments) {
            // Function body
        }
* Example:

        void display() {
            printf("This is a function.\n");
        }

### 8. Return Statement

* The return statement marks the end of the function.
* In the main() function, return 0; indicates successful execution.
* Example:

        int main() {
            return 0;  // Returns 0 to the operating system
        }

## Summary of a C Program's Structure

* The typical structure of a C program follows this sequence:
    * Preprocessor Directives (#include and #define).
    * Global Declarations (variables, prototypes).
    * main() Function (entry point).
    * Local Declarations and Program Statements.
    * Function Definitions (user-defined functions).
* This structure ensures readability, maintainability, and clarity of the code.