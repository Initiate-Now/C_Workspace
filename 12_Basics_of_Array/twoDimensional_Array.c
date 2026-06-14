/************************************
 * Name    : twoDimensional_Array.c
 * Purpose : To demonstrate two-dimensional array declaration, initialization and accessing elements.
 * Author  : Navin Chakravarthy Kamalakannan
 ************************************/
#include <stdio.h>

// Simple weather program using a two-dimensional array
// Rows: cities, Columns: days

int main(void) {
    const int CITIES = 3;
    const int DAYS = 7;

    // Sample temperatures (Celsius) for 3 cities over 7 days
    int temps[3][7] = {
        {22, 24, 19, 21, 23, 25, 20}, // City 0
        {15, 17, 16, 14, 18, 19, 16}, // City 1
        {28, 27, 29, 30, 26, 25, 28}  // City 2
    };

    // Print table header
    printf("Weather data (temperatures in C)\n");
    printf("City\\Day");
    for (int d = 0; d < DAYS; ++d) printf("\tD%d", d+1);
    printf("\n");

    // Print temperatures
    for (int c = 0; c < CITIES; ++c) {
        printf("C% d\t", c);
        for (int d = 0; d < DAYS; ++d) {
            printf("\t%d", temps[c][d]);
        }
        printf("\n");
    }

    // Compute and print average temperature per city
    printf("\nAverage temperature per city:\n");
    for (int c = 0; c < CITIES; ++c) {
        int sum = 0;
        for (int d = 0; d < DAYS; ++d) sum += temps[c][d];
        double avg = (double)sum / DAYS;
        printf("City %d: %.2f C\n", c, avg);
    }

    // Compute and print average temperature per day across all cities
    printf("\nAverage temperature per day (across cities):\n");
    for (int d = 0; d < DAYS; ++d) {
        int sum = 0;
        for (int c = 0; c < CITIES; ++c) sum += temps[c][d];
        double avg = (double)sum / CITIES;
        printf("Day %d: %.2f C\n", d+1, avg);
    }

    // Find overall min and max
    int min = temps[0][0], max = temps[0][0];
    int minC = 0, minD = 0, maxC = 0, maxD = 0;
    for (int c = 0; c < CITIES; ++c) {
        for (int d = 0; d < DAYS; ++d) {
            int t = temps[c][d];
            if (t < min) { min = t; minC = c; minD = d; }
            if (t > max) { max = t; maxC = c; maxD = d; }
        }
    }
    printf("\nMinimum temperature: %d C (City %d, Day %d)\n", min, minC, minD+1);
    printf("Maximum temperature: %d C (City %d, Day %d)\n", max, maxC, maxD+1);

    return 0;
}
