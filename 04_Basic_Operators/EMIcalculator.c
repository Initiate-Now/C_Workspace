/************************************
 * Name    : EMIcalculator.c
 * Purpose : To Demostrate Arithmatic Operator, Calculate the monthly installment for a loan.
 * Author  : Navin Chakravarthy Kamalakannan
 ************************************/

#include <stdio.h>
#include <math.h> // For pow() function

int main() {
    float principal = 50000;  // Loan amount
    float rate = 7.5;         // Annual interest rate in %
    int years = 5;            // Loan tenure in years

    float monthlyRate = rate / (12 * 100); // Convert annual rate to monthly
    int months = years * 12; // Total number of months

    float EMI = (principal * monthlyRate * pow(1 + monthlyRate, months)) / 
                (pow(1 + monthlyRate, months) - 1);

    printf("Monthly EMI: %.2f\n", EMI);
    return 0;
}
