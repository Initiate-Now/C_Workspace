/************************************
 * Name    : SwapBits.c
 * Purpose : To Demostrate XOR operations by Swap bits.
 * Author  : Navin Chakravarthy Kamalakannan
 ************************************/
#include <stdio.h>

// Function to print the binary representation of a number
void printBinary(unsigned int num) {
    int i;
    int bits = sizeof(num) * 8; // Total number of bits in an unsigned int

    for (i = bits - 1; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");
}

// Function to swap two bits in a number
unsigned int swapBits(unsigned int num, int pos1, int pos2) {
    // Extract the bits at the given positions
    unsigned int bit1 = (num >> pos1) & 1;
    unsigned int bit2 = (num >> pos2) & 1;
    
    // If the bits are different, toggle them
    if (bit1 != bit2) {
        num ^= (1 << pos1);
        num ^= (1 << pos2);
    }
    
    return num;
}

int main() {
    unsigned int number = 0b00101001; // Example number (41 in decimal)
    int pos1 = 1, pos2 = 5; // Positions of bits to swap (0-based index)
    
    printf("Original number: %u (Binary: ", number);
    printBinary(number);
    printf(")\n");
    
    number = swapBits(number, pos1, pos2);
    printf("After swapping bits at positions %d and %d: %u (Binary: ", pos1, pos2, number);
    printBinary(number);
    printf(")\n");
    
    return 0;
}
