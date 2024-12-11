/************************************
 * Name    : AreaofRectangle.c
 * Purpose : To get the inputs through arguments and calculate area of rectangle.
 * Author  : Navin Chakravarthy Kamalakannan
 ************************************/

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <width> <height>\n", argv[0]);
        return 1;
    }
    double perimeter = 0.0, area = 0.0;

    double width = atof(argv[1]); // Convert argument to float
    double height = atof(argv[2]); // Convert argument to float

    // Perimeter and area Calculation 
    perimeter = 2.0 * (height + width);
    area = width * height;

    //Display the output
    printf("Perimeter of Rectangle is: %.2f\n",perimeter);
    printf("Area of Rectangle is: %.2f", area);

    return 0;
}