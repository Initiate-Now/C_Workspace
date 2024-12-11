# Command Line Arguments

In C programming, command-line arguments allow a program to accept input parameters directly from the command line when the program is executed. This is useful for passing information to the program without hardcoding it or prompting the user during runtime.

## main() Function with Command-Line Arguments

The main() function can accept two parameters to handle command-line arguments:

    int main(int argc, char *argv[])

**argc (Argument Count):**

* An integer that represents the total number of arguments passed to the program.
* It includes the program's name as the first argument.
argc is always at least 1.

**argv (Argument Vector):**

* An array of strings (char *argv[]), where each element represents a command-line argument.
* argv[0] is the name of the program (or path of the executable).
* argv[1], argv[2], ..., argv[argc-1] are the additional arguments passed by the user.

## Basic Example: Command-Line Arguments

Here is a simple program to print all the command-line arguments:

    #include <stdio.h>

    int main(int argc, char *argv[]) {
        printf("Number of arguments: %d\n", argc);

        for (int i = 0; i < argc; i++) {
            printf("Argument %d: %s\n", i, argv[i]);
        }

        return 0;
    }

Execution:

Assume the program is compiled as program and executed like this:

    ./program Hello World 123


Output:

    Number of arguments: 4
    Argument 0: ./program
    Argument 1: Hello
    Argument 2: World
    Argument 3: 123

Explanation:

1) argc = 4:
   * The total number of arguments, including the program name.
2) argv:
   * argv[0] → Name of the program (./program).
   * argv[1] → First argument (Hello).
   * argv[2] → Second argument (World).
   * argv[3] → Third argument (123).

## Key Points:

1) atoi() and atof():
   * Use atoi() to convert a string to an integer.
   * Use atof() to convert a string to a floating-point number.
   * These functions are defined in <stdlib.h>.
2) Input Validation:
   * Always check if the correct number of arguments is passed using argc.

