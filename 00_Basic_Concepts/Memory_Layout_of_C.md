# Memory Layout Of C

* The memory layout of a C program shows us how the computer stores data when the program is executing.

* A C programs memory is split into a sections like text, data, heap and stack.

* Knowing the memory layout of a C program is really helpful for making the program run faster, Debugging and preventing the issues like segmentation faults and memory leaks from happening with the C program.

A typical C program memory layout consists of the following sections:

    +------------------+
    |      Stack       |
    +------------------+
    |      Heap        |
    +------------------+
    |  Uninitialized   |
    |   Data (BSS)     |
    +------------------+
    | Initialized Data |
    +------------------+
    |   Text Segment   |
    +------------------+
## Text Segment (Code Segment)
* Contains the executable instructions of the program.
* Usually read-only to prevent accidental modification.
* Shared among multiple instances of the same program.
* Example:

        int main() {
            printf("Hello");
        }

* The machine code generated for main() is stored in the text segment.

## Initialized Data Segment
* Stores global and static variables that are explicitly initialized.
* Memory is allocated before program execution begins.
* Example:

        int count = 10;
        static int num = 5;

## BSS Segment (Block Started by Symbol)
* Stores global and static variables that are uninitialized or initialized to zero.
* Occupies no space in the executable file; memory is allocated at runtime.
* Example:

        int total;
        static int value;

## Heap Segment
* Used for dynamic memory allocation during program execution.
* Memory is allocated and released manually using functions such as malloc(), calloc(), realloc(), and free().
* Grows upward (toward higher memory addresses).
* Example:

        int *ptr = (int *)malloc(sizeof(int));

**Common issue:** Memory leaks occur when dynamically allocated memory is not freed.

## Stack Segment
* Stores function call information, local variables, and return addresses.
* Memory is automatically allocated and deallocated when functions are called and return.
* Grows downward (toward lower memory addresses).
* Example:

        void func() {
            int x = 10;
        }

* The local variable x is stored on the stack.

**Common issue:** Stack overflow can occur due to excessive recursion or large local variables.

## Why Understanding Memory Layout Is Important
* Helps optimize memory usage and program performance.
* Assists in debugging issues such as segmentation faults.
* Prevents memory leaks and stack overflows.
* Improves understanding of pointers, dynamic memory allocation, and program execution.

## Common Memory-Related Errors in C

* **Memory Leak** → Allocated memory was not freed.
    * Example:
            #include <stdlib.h>

            int main() {
                int *ptr = malloc(sizeof(int));

                *ptr = 10;

                // free(ptr); is missing

                return 0;
            }
    * memory leak occurs when dynamically allocated memory is no longer needed but is not released back to the system using free().

* **Segmentation Fault** → Accessed invalid or unauthorized memory.
    * Example:

            int arr[5];
            arr[10] = 100;  // Invalid memory access
    * segmentation fault (segfault) occurs when a program tries to access memory that it is not allowed to access.
        
* **Stack Overflow** → Used more stack memory than available.
    * Example:
            void func() {
                func();
            }

            int main() {
                func();
            }
    * stack overflow occurs when the stack memory is exhausted.