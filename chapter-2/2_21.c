/*
* (Odd or even)
* Write a program that reads an integer and determines and displays whether it’s odd or even.
* Use the remainder operator.
* An even number is a multiple of two. Any multiple of two leaves a remainder of zero when divided by 2.
*/

#include <stdio.h>

int main(void){
	printf("%s", "Enter an integer: ");
	int num;
	scanf("%d", &num);

	if (num % 2 == 0){
		printf("\n%d is even\n", num);
	}

	if (num % 2 == 1){
		printf("\n%d is odd\n", num);
	}
}