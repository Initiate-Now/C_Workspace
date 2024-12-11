# Enum in C

In C programming, the enum (short for enumeration) data type is used to define a set of named integer constants. It is a user-defined type that helps make programs more readable and maintainable by assigning meaningful names to constant values.

## Syntax of enum

    enum enum_name {
        constant1,
        constant2,
        constant3,
        ...
    };
* enum_name: The name of the enumeration type (optional).
* constant1, constant2...: Named constants, which by default are assigned consecutive integer values starting from 0.

## Example of Enum 

    #include <stdio.h>

    enum Days {
        SUNDAY,    // 0
        MONDAY,    // 1
        TUESDAY,   // 2
        WEDNESDAY, // 3
        THURSDAY,  // 4
        FRIDAY,    // 5
        SATURDAY   // 6
    };

    int main() {
        enum Days today;

        today = WEDNESDAY;

        printf("Today is day number: %d\n", today); // Output: 3

        return 0;
    }

## Use of enum

* **Improves Code Readability:** Replacing raw integer values with meaningful names makes code easier to understand.
* **Reduces Errors:** Reduces the chances of using incorrect values.
* **Easier Maintenance:** Updating a value in an enum updates all references automatically.

* **Improves Debugging:** The constants have meaningful names rather than arbitrary numbers.

## Limitations of enum

* enum constants are always integers.
* They are not type-safe. You can assign an integer directly to an enum variable, which may lead to bugs.

        enum Color { RED, GREEN, BLUE };
        enum Color c = 10; // Allowed, but incorrect.
        
## Key Points

* enum provides a way to define a set of named constants.
* By default, values start at 0 and increment by 1.
* You can assign custom values to enum constants.
* Use enum to improve code clarity, especially in switch cases or flags.