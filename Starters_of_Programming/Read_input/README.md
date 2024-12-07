# Read Input (scanf())

scanf in C is a standard library function used to read input from the user via the terminal (standard input). It allows programmers to take input of different data types (like integers, floats, characters, and strings) and store it in variables.

## Syntax

        #include <stdio.h>

        scanf("format specifiers", &variable1, &variable2, ...);

## Components
* **Format specifiers:** Define the type of data to be read (e.g., %d for integers, %f for floats, %c for characters).
* **& (address-of operator):** It provides the memory address of the variable where the input value will be stored.
* **Variables:** The variables that will store the input.

## About scanf()

* Returns the number of items that it sucessfully reads.
* Use the & operator: Except for strings (arrays), the & operator must be used to provide the address of the variable where the input will be stored.
* Whitespace handling:
  * scanf ignores leading whitespaces like spaces, tabs, and newlines when reading numerical values.
  * It stops reading strings when it encounters a space or newline.
* Buffer Issues: Using scanf after printf without a newline can sometimes leave unwanted characters in the input buffer.
* Input Validation: Always validate the user input to avoid undefined behavior.
