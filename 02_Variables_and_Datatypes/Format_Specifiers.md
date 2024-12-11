# Format Specifiers

In C programming, format specifiers are special placeholders used in functions like printf() and scanf() to indicate the type of data being handled. These specifiers ensure the correct interpretation and formatting of data during input/output operations.

## Commonly Used Format Specifiers

Specifier  |         Description              |	Example
-----------|----------------------------------|----------
%d or %i   | Integer (signed)                 |	printf("%d", 123);
%u         | Unsigned integer	              | printf("%u", 123);
%f         | Floating-point (decimal)         |	printf("%f", 3.14);
%.nf       | Floating-point with precision    |	printf("%.2f", 3.1415);
%c	       | Character	                      | printf("%c", 'A');
%s	       | String	                          | printf("%s", "Hello");
%p	       | Pointer (address)                |	printf("%p", ptr);
%o	       | Octal number                     |	printf("%o", 10);
%x or %X   | Hexadecimal (lowercase/uppercase)|	printf("%x", 255);
%e or %E   | Scientific notation	          | printf("%e", 123.45);
%g or %G   | Shortest representation (float)  |	printf("%g", 3.14);
%%	       | Print a percent sign (%)         |	printf("%%");

## Examples of Format Specifiers

### Integer and Floating-Point:

    #include <stdio.h>
    int main() {
        int a = 10;
        float b = 3.14159;

        printf("Integer: %d\n", a);
        printf("Floating-point: %f\n", b);
        printf("Floating-point (2 decimal places): %.2f\n", b);

        return 0;
    }
Output:

    Integer: 10
    Floating-point: 3.141590
    Floating-point (2 decimal places): 3.14

### Character and String:

    #include <stdio.h>
    int main() {
        char ch = 'A';
        char str[] = "Hello, World!";

        printf("Character: %c\n", ch);
        printf("String: %s\n", str);

        return 0;
    }

Output:

    Character: A
    String: Hello, World!

### Octal and Hexadecimal:

    #include <stdio.h>
    int main() {
        int num = 255;

        printf("Octal: %o\n", num);
        printf("Hexadecimal (lowercase): %x\n", num);
        printf("Hexadecimal (uppercase): %X\n", num);

        return 0;
    }

Output:

    Octal: 377
    Hexadecimal (lowercase): ff
    Hexadecimal (uppercase): FF

### Printing Percent Symbol (%%):

    #include <stdio.h>
    int main() {
        printf("Discount: 50%%\n");
        return 0;
    }

Output:

    Discount: 50%

## Advanced Usage: Field Width and Precision

1) **Field Width:** Control the minimum number of characters printed.

   * %5d → Print an integer in at least 5 spaces.

            int x = 42;
            printf("%5d\n", x);  // Output: "   42"

2) **Left Alignment:** Use - for left alignment.

        printf("%-5d\n", x);  // Output: "42   "

3) **Precision for Strings:** Limit the number of characters printed.

        char str[] = "HelloWorld";
        printf("%.5s\n", str);  // Output: "Hello"

4) **Zero Padding:** Use 0 to pad with zeros instead of spaces.

        printf("%05d\n", x);  // Output: "00042"


## Summary

* Format specifiers allow you to format input and output effectively.
* They are used in printf(), scanf(), and related functions.
* Understanding their combinations (width, precision, alignment) helps you display data in a clean and controlled format.