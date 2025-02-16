/************************************
 * Name    : SetClearToggleBit.c
 * Purpose : To Demostrate Set, Clear, Toggle bits .
 * Author  : Navin Chakravarthy Kamalakannan
 ************************************/
#include <stdio.h>

// Function to set a bit
unsigned int setBit(unsigned int num, int bitPosition) {
    return num | (1 << bitPosition);
}

// Function to clear a bit
unsigned int clearBit(unsigned int num, int bitPosition) {
    return num & ~(1 << bitPosition);
}

// Function to toggle a bit
unsigned int toggleBit(unsigned int num, int bitPosition) {
    return num ^ (1 << bitPosition);
}

// Function to print Binary
void printBinary(unsigned int num) {
    int i;
    int bits = sizeof(num) * 8; // Total number of bits in an unsigned int

    for (i = bits - 1; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
}

int main() {
    unsigned int number = 15;
    
    printf("Original number: %u (Binary:", number);
    printBinary(number);
    printf(")\n");

    number = setBit(number, 5);
    printf("After setting bit at position 5: %u (Binary:", number);
    printBinary(number);
    printf(")\n");

    number = clearBit(number, 3);
    printf("After clearing bit at position 3: %u (Binary:", number);
    printBinary(number);
    printf(")\n");

    number = toggleBit(number, 2);
    printf("After toggling bit at position 2: %u (Binary:", number);
    printBinary(number);
    printf(")\n");
    
    return 0;
}
