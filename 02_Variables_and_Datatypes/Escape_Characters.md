# Escape Characters

Escape characters in C are special characters used to represent certain whitespace or non-printable characters within strings or character literals. These characters start with a backslash (\) followed by a specific character, and they are commonly used to format output or handle special cases like newline, tab, or quotes.

Here is a table of commonly used escape characters in C:

|Escape Character |	Meaning	            | Example
|-----------------|---------------------|--------
|\n	              |Newline (line break) |	printf("Hello\nWorld");
|\t	              | Horizontal tab      |	printf("Hello\tWorld");
|\\	              | Backslash	        | printf("C:\\Path");
|\"	              | Double quote        |	printf("He said, \"Hi\"");
|\'	              | Single quote        |	printf("It\'s OK");
|\b	              | Backspace	        | printf("ABC\bD");
|\r	              | Carriage return     | printf("Hello\rWorld");
|\f	              | Form feed	        | Rarely used
|\v	              | Vertical tab        | Rarely used
|\0	              | Null character (string terminator) |	char str[] = "ABC\0DEF";
|\a	              | Audible alert (bell sound) |	printf("\a");
|\?	              | Question mark (used in rare cases) |	printf("\?");

## Notes

* Escape sequences are treated as a single character.
* They are primarily used in formatted output, string literals, and controlling cursor movement.
* The null character (\0) is especially important in string handling because it marks the end of a string in C.
* Escape sequences must be enclosed in single quotes when assigned to a character variable.