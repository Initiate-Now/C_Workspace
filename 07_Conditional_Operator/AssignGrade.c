/************************************
 * Name    : AssignGrade.c
 * Purpose : Assigning Grades Based on Marks using Trenary operator.
 * Author  : Navin Chakravarthy Kamalakannan
 ************************************/
#include <stdio.h>

int main(){
    int marks;
    printf("Enter marks to convert grade: ");
    scanf("%d",&marks);
    char grade = (marks >= 90) ? 'A' :
                 (marks >= 80) ? 'B' :
                 (marks >= 70) ? 'C' :
                 (marks >= 60) ? 'D' : 'F';

    printf("Grade: %c\n", grade);
    return 0;
}
