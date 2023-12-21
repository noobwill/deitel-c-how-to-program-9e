/*
* (Separating Digits in an Integer)
* Write a program that inputs one five-digit number, separates the number into its individual digits and displays the digits separated from one another by three spaces each.
* Hint: Use combinations of integer division and the remainder operation.
* For example, if the user types in 42139, the program should display
* 4 2 1 3 9
*/

#include <stdio.h>

int main(void){
	printf("%s", "Enter a five-digit number: ");
	int num;
	scanf("%d", &num);

	int ones = num % 10;
	int tens = num / 10 % 10;
	int hundreds = num / 100 % 10;
	int oneThousands = num / 1000 % 10;
	int tenThousands = num / 10000;
	printf("%d %d %d %d %d", tenThousands, oneThousands, hundreds, tens, ones);

	return 0;
}