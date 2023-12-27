/*
* (Printing the Decimal Equivalent of a Binary Number)
* Input a binary integer (5 digits or fewer) containing only 0s and 1s and print its decimal equivalent.
* Hint: Use the remainder and division operators to pick off the “binary” number’s digits one at a time from right-to-left.
* Just as in the decimal number system, in which the rightmost digit has a positional value of 1, and the next digit left has a positional value of 10, then 100, then 1000, and so on, in the binary number system the rightmost digit has a positional value of 1, the next digit left has a positional value of 2, then 4, then 8, and so on.
* Thus the decimal number 234 can be interpreted as 4 * 1 + 3 * 10 + 2 * 100.
* The decimal equivalent of binary 1101 is 1 * 1 + 0 * 2 + 1 * 4 + 1 * 8 or 1 + 0 + 4 + 8 or 13.
*/

#include <stdio.h>

int main(void){
	int binaryInteger;
	printf("%s", "Enter a binary integer (5 bits or fewer): ");
	scanf("%d", &binaryInteger);

	int bit, decimalInteger = 0, weight = 1;
	while (binaryInteger != 0){
		bit = binaryInteger % 10;
		decimalInteger += bit * weight;
		binaryInteger /= 10;
		weight *= 2;
	}

	printf("Decimal equivalent: %d\n", decimalInteger);

	return 0;
}