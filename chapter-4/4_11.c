/*
* (Find the Smallest)
* Write a program that finds the smallest of several integers.
* Assume that the first value read specifies the number of values remaining.
*/

#include <stdio.h>
#include <limits.h>

int main(void){
	int num;
	printf("%s", "Enter how many values to read: ");
	
	if (scanf("%d", &num) == 1 && num != 0){
		int value, status, min = INT_MAX;
		for (int i = 0; i < num; i++){
			printf("%s", "Enter an integer: ");
			status = scanf("%d", &value);
			if (status == 1){
				if (value < min){
					min = value;
				}
			}
			else{
				puts("Only positive integers allowed!");
				break;
			}
		}

		if (status == 1){
			printf("Min: %d\n", min);
		}
	}
	else{
		puts("Only positive integers allowed!");
	}

	return 0;
}