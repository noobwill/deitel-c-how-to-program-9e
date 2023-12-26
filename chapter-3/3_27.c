/*
* (Validating User Input)
* Modify the program in Figure 3.6 to validate its inputs.
* For each input, if the value is other than 1 or 2, keep looping until the user enters a correct value.
*/

#include <stdio.h>
#include <limits.h>

int main(void){
	int num, largest, secondLargest = INT_MIN, counter = 0;

	printf("%s", "Enter an integer (no repetition allowed): ");
	scanf("%d", &num);
	while (num == 1 || num == 2){
		printf("%s", "Enter an integer (no repetition allowed): ");
		scanf("%d", &num);
	}
	largest = num;

	while (counter < 9){
		printf("%s", "Enter an integer (no repetition allowed): ");
		scanf("%d", &num);

		while (num == 1 || num == 2){
			printf("%s", "Enter an integer (no repetition allowed): ");
			scanf("%d", &num);
		}
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