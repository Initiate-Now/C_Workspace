/************************************
 * Name    : TemperatureControl.c
 * Purpose : This program simulates a simple smart home temperature control system. It decides whether to turn on the heater, AC, or keep it off based on the room temperature.
 * Author  : Navin Chakravarthy Kamalakannan
 ************************************/
#include <stdio.h>

int main() {
    int temperature;

    // User input for temperature
    printf("Enter the room temperature (°C): ");
    scanf("%d", &temperature);

    // Decision-making logic
    if (temperature < 18) {
        printf("Too Cold! Turning ON the Heater.\n");
    } else if (temperature > 30) {
        printf("Too Hot! Turning ON the Air Conditioner.\n");
    } else {
        printf("Temperature is Comfortable. No action needed.\n");
    }

    return 0;
}
