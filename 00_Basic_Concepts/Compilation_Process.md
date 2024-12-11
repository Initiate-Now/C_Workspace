# Compilation Process of Program

The compilation is the process of converting the source code of the C language into machine code. As C is a mid-level language, it needs a compiler to convert it into an executable code so that the program can be run on our machine.

<img alt="Compilation_Process" src="docs\Compilation_Process.png" width="300" height="400"/>

## 1. Editing Source File

* We first create a C program using an editor and save the file as filename.c

## 2. Preprocessing

* Pre-processing is the first stage in the compilation process of a program written in C or other similar languages. 
* During this phase, the preprocessor handles directives that tell it how to modify the source code before actual compilation begins. 
* These directives start with a # symbol and are used to include files, define macros, and conditionally compile sections of code.

### Preprocessing Activities

**1.File Inclusion (#include)**

* The preprocessor replaces #include directives with the content of the specified header or source file. For example:

        #include <stdio.h>

* The above line is replaced with the actual content of the stdio.h file.

**2.Macro Substitution (#define)**

* Macros are preprocessor directives used to define constants or inline code replacements. 

* For example:

        #define PI 3.14159

* Replaces every instance of PI in the source code with 3.14159.

**3.Conditional Compilation (#if, #ifdef, #ifndef, #else, #elif, #endif)**

* This allows selective compilation of code sections based on conditions. 

* For example:

        #ifdef DEBUG
        printf("Debugging is enabled\n");
        #endif

* If DEBUG is defined, the printf line is included in the compilation; otherwise, it is excluded.

**4.Line Control (#line)**

* Alters the line numbers and filename for error reporting and debugging purposes. 

* For example:

        #line 100 "example.c"

* Marks the current line as line 100 in file example.c.

**5.Error Handling (#error)**

* Emits a user-defined compilation error if a condition is met. 
* For example:

        #ifndef CONFIG
        #error "CONFIG is not defined"
        #endif

**6.Pragma Directives (#pragma)**

* Provides compiler-specific instructions. 
* For example:

        #pragma once

* Ensures the file is included only once in a compilation unit.

**7.Removing Comments**

* All comments in the source code are stripped away during pre-processing.

### Example: Preprocessor in Action

Input Code:

    #include <stdio.h>
    #define SQUARE(x) ((x) * (x))

    int main() {
        printf("Square of 5: %d\n", SQUARE(5));
        return 0;
    }
After Preprocessing:

    /* content of stdio.h */
    int main() {
        printf("Square of 5: %d\n", ((5) * (5)));
        return 0;
    }

The preprocessor expands macros and includes the necessary files, simplifying the source code for the compiler.

### Importance of Preprocessing

**Modular and maintainable code:** File inclusions simplify reusability.

**Debugging and optimization:** Conditional compilation enables debugging and customized builds.

**Automation:** Macros help reduce repetitive coding tasks.

## 3. Compilation

This stage translates the preprocessed source code into assembly code. 

### Compilation Activities

**1.Syntax and Semantic Analysis**

* The compiler parses the code to check for syntax errors and ensure the code conforms to the language rules.
* During semantic analysis, the compiler checks that:
    * All variables are declared before use.
    * Function calls match their definitions (e.g., argument types).
    * Type conversions are valid.

**2.Intermediate Code Generation**

* The compiler generates an intermediate representation (IR) of the code that is more abstract than assembly but easier for further processing.
* Example: Three-address code, Abstract Syntax Trees (ASTs), or LLVM IR (in modern compilers).

**3.Optimization**

Optimizations are applied to make the code more efficient:
* **Constant folding:** Simplify expressions that can be computed at compile time (e.g., 3 * 4 is replaced with 12).
* **Dead code elimination:** Remove code that will never execute.
* **Inlining:** Replace function calls with the function body for small, frequently used functions.

**4.Assembly Code Generation**

* The compiler converts the optimized intermediate code into assembly language for the target architecture (e.g., x86, ARM).

Example (simplified assembly for int a = b + c;):

    mov eax, b
    add eax, c
    mov a, eax

### Example of Compilation

Input Code (Post-Preprocessing):

    #include <stdio.h>
    #define SQUARE(x) ((x) * (x))

    int main() {
        printf("Square of 5: %d\n", SQUARE(5));
        return 0;
    }

Output (Simplified Assembly):

    _main:
        push ebp
        mov ebp, esp
        sub esp, 16
        mov DWORD PTR [ebp-4], 5
        mov eax, DWORD PTR [ebp-4]
        imul eax, eax
        push eax
        push OFFSET FLAT:.LC0
        call printf
        add esp, 8
        mov eax, 0
        leave
        ret

### Key Points About Compilation

* The output of this stage is an assembly file (e.g., .s file).
* The assembly code is specific to the target architecture.
* Compilation transforms the source code into a lower-level representation, which is one step closer to machine code.

## 4. Assembling

The assembly process is the step in the compilation pipeline where the assembly code, generated during the compilation stage, is translated into machine code (binary instructions) that the processor can execute.

### Steps in the Assembly Process

**1.Translation to Machine Code**

* The assembler reads the assembly code (e.g., .s or .asm file) and converts each assembly instruction into its corresponding machine code, a binary representation of the instruction that the CPU understands.
* Example:

        mov eax, 5

Might translate to machine code like:

    B8 05 00 00 00

(where B8 is the opcode for mov eax, immediate, and 05 00 00 00 is the value).

**2.Symbol Table Generation**

* The assembler creates a symbol table, which maps identifiers (e.g., variable names, function names) to their memory locations or offsets.
* Example: The label **_start** might be associated with a memory address like **0x1000**.

**3.Handling Data Sections**

* The assembler organizes different types of data into sections such as:

   * **.text:** For code (instructions).
   * **.data:** For initialized global and static variables.
   * **.bss:** For uninitialized variables.

**4.Object File Creation**

The assembler produces an object file (e.g., .o or .obj) that contains:
* **Machine code** for the program.
* A **symbol table** for unresolved symbols (like external function calls or global variables).
* **Relocation information** to adjust addresses during linking.

### Example of Assembly

Input Assembly Code:

    section .data
    msg db "Hello, World!", 0

    section .text
    global _start

    _start:
        mov rax, 1         ; system call for write
        mov rdi, 1         ; file descriptor for stdout
        mov rsi, msg       ; address of the message
        mov rdx, 13        ; length of the message
        syscall            ; invoke system call

        mov rax, 60        ; system call for exit
        xor rdi, rdi       ; exit code 0
        syscall            ; invoke system call

Output Machine Code (in hex, part of the object file):

    B8 01 00 00 00 BF 01 00 00 00 BE 10 00 00 00 BA 0D 00 00 00 0F 05
    B8 3C 00 00 00 31 FF 0F 05

### Key Features of an Object File

**An object file contains:**

* **Machine Code**
The actual binary instructions for the CPU.
* **Symbols**
Names of functions or variables that are still unresolved.
* **Relocation Data**
Information for the linker to adjust addresses when combining object files into an executable.
* **Metadata**
Debugging information, if included.

## 5. Linking

The linker is a crucial component in the build process that combines multiple object files and libraries into a single executable file or a shared library. Its main responsibility is to resolve references between code modules and produce a fully functional binary.


### Responsibilities of the Linker

**1.Symbol Resolution**

* The linker matches symbol definitions (e.g., functions or global variables provided in one file) with symbol references (e.g., calls to those functions or accesses to variables in another file).
* For example:

        // File1.c
        void foo() {
            // ...
        }

        // File2.c
        void bar() {
            foo(); // Symbol 'foo' is resolved here by the linker.
        }

**2.Relocation**

* The linker adjusts memory addresses in the object files so that all code and data fit into a single memory space.
* For instance:
  * If two object files define functions at address 0x1000, the linker adjusts one of them to avoid overlap.
* It also resolves references to symbols by updating them to point to their correct addresses.

**3.Combining Object Files**

* The linker combines machine code from different object files into a single binary.
* Sections like .text (code) and .data (initialized data) from all input files are merged appropriately.

**4.Library Linking**

* If the program uses external libraries (e.g., printf from the C standard library), the linker locates the library code and includes it in the final binary.
* Libraries can be:
  * **Static libraries** (e.g., .a or .lib files): Included directly in the executable.
  * **Shared libraries** (e.g., .so or .dll files): Referenced at runtime instead of being included in the binary.

**5.Output Generation**

* The linker generates the final output:
   * **Executable file:** A runnable program (e.g., .exe, ELF file).
   * **Shared library:** A dynamically loaded library (e.g., .so, .dll).
   * **Map file (optional):** A text file listing symbol locations and memory usage.

### Types of Linking

**1.Static Linking**

* The linker includes all the required code from libraries into the final executable.
* Pros:
  * No dependency on external libraries at runtime.
  * Faster program startup.
* Cons:
  * Larger executable size.
  * Updating libraries requires rebuilding the executable.

**2.Dynamic Linking**

* The linker resolves references to shared libraries but does not include their code in the executable. Instead, the program loads these libraries at runtime.
* Pros:
  * Smaller executable size.
  * Easier library updates without recompilation.
* Cons:
  * Dependency on library availability at runtime.
  * Slightly slower startup time.

### Example of Linking

**Input Object Files:**

main.o:

    extern _printf
    section .text
    global _main
    _main:
        push dword hello
        call _printf
        add esp, 4
        ret

hello.o:

    section .data
    global hello
    hello db "Hello, World!", 0

**Output Executable:** 

The linker combines these files, resolves _printf to its address in the standard library, and adjusts the reference to hello so _main knows its correct address.

### Linker Options (Example with GCC)

Using GCC to link object files:

    gcc -o program main.o hello.o -lc

* -o program: Output file name.
* main.o hello.o: Input object files.
* -lc: Link the C standard library (libc).

## 6. Executable

* An executable file is a file that can be run on a computer without further processing. It contains:

  * **Machine code:** Instructions that the CPU can execute.
  * **Metadata:** Information required by the OS to load and run the program.
  * **Dependencies:** References to libraries or system resources used by the program.

### Examples:

* On Windows: .exe or .dll files.
* On Linux/Unix: ELF (.out or no specific extension).
* On MacOS: Mach-O files.


















