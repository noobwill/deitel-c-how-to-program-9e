/*
* (Sum a Sequence of Integers)
* Write a program that sums a sequence of integers.
* Assume that the first integer read with scanf specifies the number of values remaining to be entered.
* Your program should read only one value each time scanf executes.
* A typical input sequence might be 5 100 200 300 400 500 where the 5 indicates that the next five values are to be summed.
*/

#include <stdio.h>

int main(void){
	int num, sum = 0;
	
	if (scanf("%d", &num) == 1){
		int status;

		for (int i = 0; i < num; i++){
			int value;
			status = scanf("%d", &value);

			if (status == 1){
				sum += value;
			}
			else{
				puts("Only integers allowed.");
				break;
			}
		}

		if (status == 1){
			printf("Sum: %d\n", sum);
		}
	}
	else{
		puts("Only integers allowed.");
	}


}