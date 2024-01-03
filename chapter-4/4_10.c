/*
* (Average a Sequence of Integers)
* Write a program that calculates and prints the average of several integers.
* Assume the last value read with scanf is the sentinel 9999.
* A typical input sequence might be 10 8 11 7 9 9999 indicating that the average of all the values preceding 9999 is to be calculated.
*/

#include <stdio.h>

int main(void){
	int value, sum = 0, count = 0, sentinel = 9999;

	do{
		printf("%s", "Enter an integer (9999 to end): ");
		int status = scanf("%d", &value);

		if (status == 1){
			if (value != 9999){
				sum += value;
				count++;
			}
		}
		else{
			puts("Only integers allowed!");
			break;
		}
	}while (value != sentinel);

	double average = (double) sum / count;
	printf("Average: %f", average);
}