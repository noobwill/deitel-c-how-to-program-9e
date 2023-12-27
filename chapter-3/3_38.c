/*
* (Counting 7s)
* Write a program that reads an integer (5 digits or fewer) and determines and prints how many digits in the integer are 7s.
*/

#include <stdio.h>

int main(void){
	int num;
	printf("%s", "Enter an integer (5 digits or fewer): ");
	scanf("%d", &num);

	int count = 0;
	while (num != 0){
		if (num % 10 == 7){
			count++;
		}
		num /= 10;
	}

	printf("%d digits are 7s.\n", count);

	return 0;
}