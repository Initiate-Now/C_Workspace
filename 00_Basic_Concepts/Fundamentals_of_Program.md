# Fundamentals of Program :

* A computer is an electronic device that will take input from the user, process it, and give results or respond as per the user. 
* A computer's instruction set is like its basic toolbox. It is a collection of all the simple tasks the computer's processor is designed to perform. These tasks include things like:

    **Arithmetic operations:** Adding, subtracting, multiplying, or dividing numbers.
    
    **Data movement:** Copying data from one place to another, like moving it between memory and registers.
    
    **Logic operations:** Comparing values or performing logical operations like AND, OR, and NOT.

    **Control flow:** Making decisions, such as jumping to another part of a program based on a condition.
* The instruction set acts as the language that the computer's processor understands and uses to execute your programs.

## Terminology

### **CPU (Central Processing Unit)**
    
* The brain of the computer.
* Does most of the computing work.
* Instructions are executed here.

### **RAM (Random Access Memory)**

* Temporary memory used by the computer to store data and instructions that are actively being used or processed(store the data of a program while it is running).
* Contents are lost when the power is turned off.
* For example, When you open a program, its instructions and data are loaded into RAM so the CPU can quickly access them.

### **Program Memory**

* Memory where the actual program code (instructions) is stored.
* This is often non-volatile and can include types like:
    * Flash memory (used in embedded systems to store firmware).
    * ROM (Read-Only Memory) or EEPROM for fixed instructions.
* For example, In microcontrollers like the PIC16F877A, the program memory stores the firmware or application code that the CPU executes.

### **Operating System**

* The operating system (OS) plays a crucial role by acting as a bridge between your program and the hardware. 
* It provides the necessary environment and services to write, execute, and manage programs. 
* For example, It manages the Computers resources (memory, I/O devices, etc.,) and handles the execution of programs.

### **Fetch\Execute Cycle**

* The machine instruction cycle is the process a CPU follows to execute instructions stored in memory. 
* It consists of four main stages: Fetch, Decode, Execute, and Store.
<img alt="Fetch_execute_Cycle" src="docs\Fetch_execute_cycle.png" width="300" height="200"/>

   **Fetch:** The Control Unit (CU) initiates the fetch stage by using the Program Counter (PC) to store the address of the next instruction to be executed. This address is sent to the Memory Address Register (MAR), which holds the address of the required instruction in memory.

   **Decode:** Once the instruction is in the CIR (Current Instruction Register), the Control Unit (CU) decodes it to determine what operation needs to be performed. The decoded instruction identifies whether data needs to be retrieved, stored, or manipulated.

   **Execute:** The Arithmetic Logic Unit (ALU) performs the necessary calculations or logical operations, depending on the instruction. For example, if the instruction involves an arithmetic operation (addition, subtraction, etc.), the ALU processes the data.

   **Store:** After execution, the result in the ACC (Accumulator) may need to be stored back into memory or passed to another register for further operations.

## High Level Language

* Opposite of assembly Language.
* C is a higher level programing language that describes actions in amore abstract form.
* Do not have to worry about the precise steps to accomplish a particular task.
    * total = x+ Vs mv ax,5; mv cx, 4; etc.
* Compiler translates the high-level language source code into the detailed set of machine language instructions.
* Program does the high-level thinking and the compiler generates the tedious instructions to the CPU.
* High level language are easier to learn and much easier to program.