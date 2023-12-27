/*
* (Palindrome Tester)
* A palindrome is a number or a text phrase that reads the same backward as forward.
* For example, each of the following five-digit integers is a palindrome: 12321, 55555, 45554 and 11611.
* Write a program that reads in a fivedigit integer and determines whether or not it’s a palindrome.
* Hint: Use the division and remainder operators to separate the number into its individual digits.
*/

#include <stdio.h>

int main(void){
	int num;
	printf("%s", "Enter a five-digit non negative integer: ");
	scanf("%d", &num);

	int d1 = num / 10000, d2 = num % 10;

	if (d1 != d2){
		puts("Not a palindrome.");
	}
	else{
		d1 = num / 1000 % 10;
		d2 = (num % 100) / 10;
		puts(d1 == d2 ? "Palindrome!" : "Not a palindrome.");
	}

	return 0;
}