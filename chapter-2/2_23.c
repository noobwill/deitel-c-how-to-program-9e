/*
* (Multiples)
* Write a program that reads two integers and determines and displays whether the first is a multiple of the second.
* Use the remainder operator.
*/

#include <stdio.h>

int main(void){
	printf("%s", "Enter two integers: ");
	int x, y;
	scanf("%d%d", &x, &y);

	if (x % y == 0){
		printf("\n%d is a multiple of %d\n", x, y);
	}

	if (x % y != 0){
		printf("\n%d is not a multiple of %d\n", x, y);
	}
}