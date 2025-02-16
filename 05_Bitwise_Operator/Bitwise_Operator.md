# Bitwise Operators in C
Bitwise operators are used to manipulate individual bits of integers. These operators are particularly useful in low-level programming, such as embedded systems, memory management, and performance optimization.

## 1. Types of Bitwise Operators in C
Operator|Symbol|Description
---|---|---
Bitwise AND|&|Sets a bit to 1 if both corresponding bits are 1
Bitwise OR|\||Sets a bit to 1 if either corresponding bit is 1
Bitwise XOR|^|Sets a bit to 1 if the bits are different (0^1 = 1, 1^0 = 1)
Bitwise NOT|~|Inverts all bits (0 becomes 1, 1 becomes 0)
Left Shift|<<|Shifts bits to the left, filling with 0s
Right Shift|>>|Shifts bits to the right, discarding or filling with 0s

## 2. Usage Description Table
Operator|Usage|Example
---|---|---
& (AND)|Bit masking|x & 0xF0 (Extract high nibble)
\| (OR)|Bit setting|
^ (XOR)|Toggle bits, Swap|a = a ^ b
~ (NOT)|Invert bits|~x
<< (Left Shift)|Multiply by 2^n|x << 3 (Multiply by 8)
\>> (Right Shift)|	Divide by 2^n|x >> 2 (Divide by 4)

## 3. Conclusion
Bitwise operators are powerful and efficient for low-level operations, commonly used in:

* Embedded systems (GPIO manipulation)
* Cryptography (XOR-based encryption)
* Memory optimization (Bit packing)
* Game development (Graphics and collision detection)