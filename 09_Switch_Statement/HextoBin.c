/************************************
 * Name    : ButtonCase.c
 * Purpose : Convert Hexadecimal number to Binary.
 * Author  : Navin Chakravarthy Kamalakannan
 ************************************/
#include <stdio.h>

// function to convert Hexadecimal to Binary Number
void HexToBin(char* hexdec)
{

	//Skips "0x" if present at beggining of Hex string
	size_t i = (hexdec[1] == 'x' || hexdec[1] == 'X')? 2 : 0;

	while (hexdec[i]) {

		switch (hexdec[i]) {
		case '0':
			printf("0000");
			break;
		case '1':
			printf("0001");
			break;
		case '2':
			printf("0010");
			break;
		case '3':
			printf("0011");
			break;
		case '4':
			printf("0100");
			break;
		case '5':
			printf("0101");
			break;
		case '6':
			printf("0110");
			break;
		case '7':
			printf("0111");
			break;
		case '8':
			printf("1000");
			break;
		case '9':
			printf("1001");
			break;
		case 'A':
		case 'a':
			printf("1010");
			break;
		case 'B':
		case 'b':
			printf("1011");
			break;
		case 'C':
		case 'c':
			printf("1100");
			break;
		case 'D':
		case 'd':
			printf("1101");
			break;
		case 'E':
		case 'e':
			printf("1110");
			break;
		case 'F':
		case 'f':
			printf("1111");
			break;
		case '.':
			printf(".");
		default:
			printf("\nInvalid hexadecimal digit %c",
				hexdec[i]);
		}
		i++;
	}
}

// driver code
int main(int argc, char *argv[])
{  
	// Convert HexaDecimal to Binary
	printf("\nEquivalent Binary value is : ");
	HexToBin(argv[1]);
}
