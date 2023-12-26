/*
* (Find the Two Largest Numbers)
* Using an approach similar to Exercise 3.23, find the two largest values of the 10 numbers.
* You may input each number only once.
*/

#include <stdio.h>
#include <limits.h>

int main(void){
	int num, largest, secondLargest = INT_MIN, counter = 0;
	printf("%s", "Enter an integer (no repetition allowed): ");
	scanf("%d", &num);
	largest = num;

	while (counter < 9){
		printf("%s", "Enter an integer (no repetition allowed): ");
		scanf("%d", &num);
		if (num > largest){
			secondLargest = largest;
			largest = num;
		}
		else if (num > secondLargest){
			secondLargest = num;
		}
		counter++;
	}
	
	printf("The two largest values of the 10 numbers are %d and %d", largest, secondLargest);

	return 0;
}