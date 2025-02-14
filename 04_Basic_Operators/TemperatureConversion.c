/************************************
 * Name    : TemperatureConversion.c
 * Purpose : To Demostrate Assignment Operator, Convert temperature from Celsius to Fahrenheit.
 * Author  : Navin Chakravarthy Kamalakannan
 ************************************/
#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = celsius; // Assign celsius value to fahrenheit
    fahrenheit = (fahrenheit * 9 / 5) + 32; // Convert to Fahrenheit

    printf("Temperature in Fahrenheit: %.2f°F\n", fahrenheit);
    return 0;
}
