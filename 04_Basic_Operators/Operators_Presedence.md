# Operators Precedence in C
Operator precedence determines the order in which operators are evaluated in an expression. Operators with higher precedence are evaluated before operators with lower precedence.

## 1. Operator Precedence Table (Highest to Lowest)
Precedence|	Operator|	Description|Associativity
---|---|---|---
1 (Highest)|(), [], ->, .|Parentheses, Array subscript, Structure access|Left to Right
2|++, --, + (Unary), - (Unary), !, ~, (type), * (Dereference), & (Address-of), sizeof|Increment/Decrement, Unary operators, Type casting, Sizeof|	Right to Left
3|*, /, %|Multiplication, Division, Modulus|Left to Right
4|+, -|Addition, Subtraction|Left to Right
5|<<, >>|Bitwise Left Shift, Right Shift|Left to Right
6|<, <=, >, >=|Relational Operators|Left to Right
7|==, !=|Equality Operators|Left to Right
8|&|Bitwise AND|Left to Right
9|^|Bitwise XOR|Left to Right
10|Bitwise OR|Left to Right
11|&&|Logical AND|Left to Right
12|\|\||Logical OR|Left to Right
13|?:|Ternary Operator|Right to Left
14|=, +=, -=, *=, /=, %=, <<=, >>=, &=, ^=, \|=|Assignment Operators|Right to Left
15 (Lowest)|,|Comma Operator|Left to Right