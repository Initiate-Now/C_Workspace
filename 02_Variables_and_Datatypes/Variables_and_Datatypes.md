# Variables and Datatypes

## Variables in C

A variable is a name that refers to a memory location where data is stored. This data can be modified during program execution.

### Declaration of Variables

* Variables in C must be declared before use. 
* The general syntax is:

        datatype variable_name;

* Example:

        int age;       // Declaration of an integer variable
        float salary;  // Declaration of a floating-point variable
        char grade;    // Declaration of a character variable

### Initialization of Variables
* You can also initialize variables at the time of declaration

        int age = 25;
        float salary = 50000.50;
        char grade = 'A';

### Rules for Naming Variables:

* Must begin with a letter (a-z, A-Z) or an underscore (_).
* Followed by letters, digits (0-9), or underscores.
* Cannot be a reserved keyword (e.g., int, float, return).
* Case-sensitive (Age and age are different).
* Avoid special characters like @, #, etc.

### Valid Examples:

    int number;
    float _price;
    char grade1;

### Invalid Examples:

    int 1number;   // Starts with a digit
    float price#;  // Contains special character
    char return;   // 'return' is a keyword

## Datatypes in C
A datatype defines the type of data a variable can hold and determines the amount of memory it occupies.

### Types of Datatypes
* Basic Datatypes
* Derived Datatypes
* User-defined Datatypes

#### Basic Datatypes

| Type	   | Keyword | Size (on 32-bit)	| Range
|----------|---------|------------------|--------
|Integer   | int     |	4 bytes	        | -2,147,483,648 to 2,147,483,647
|Character | char    |	1 byte	        | -128 to 127 or 0 to 255
|Float	   | float   |	4 bytes	        | 1.2E-38 to 3.4E+38
|Double	   | double  |	8 bytes	        | 2.3E-308 to 1.7E+308

Examples:

    int age = 30;         // Integer
    char letter = 'A';    // Character
    float weight = 72.5;  // Floating-point
    double pi = 3.141592; // Double-precision floating-point

#### Derived Datatypes

Derived datatypes are built from the basic types:


| Type     | 	Description 
|----------|---------------
|Array     | Collection of similar data items.
|Pointer   | Stores the memory address of a variable.
|Function  | Block of code to perform a task.
|Structure | User-defined grouping of variables.
|Union	   | Like structures but share memory.

Example of Array:

    int numbers[5] = {1, 2, 3, 4, 5};

#### Special Datatype Modifiers

You can use type modifiers to alter the properties of basic datatypes.

|Modifier |	Description
|---------|------------
|short	  | Reduces the size of an integer.
|long	  | Increases the size of an integer.
|signed	  | Allows both positive and negative values.
|unsigned |	Allows only positive values.

Examples:

    short int smallNumber = 10;   // Short integer
    unsigned int positiveNum = 50;  // Only positive values
    long int bigNumber = 1000000; // Large integer    