/************************************
 * Name     : StringConcatLibFunc.c
 * Category : Strings (Character Arrays) - Declaration, 
              Initialization, and Basic String Manipulation
              (using standard library functions like strlen,
              strcpy,strcat,strcmp).
 * Program  : Write a C Program that takes two strings as input
              and concatenates them into a single string. Print
              the resulting string. 
 * Author   : Navin Chakravarthy Kamalakannan
************************************/
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], result[200];

    // Get first string from user
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove newline if present

    // Get second string from user
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove new line if present

    // Concatenate strings
    strcpy(result, str1);  // copy first string to result
    strcat(result, str2);  // Append second string to result

    // Print the result
    printf("Concatenated string: %s\n", result);

    return 0;
}