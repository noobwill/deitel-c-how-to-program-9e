/*
* (Predecrementing vs. Postdecrementing)
Write a program that demonstrates the difference between predecrementing and postdecrementing using the decrement operator --.
*/

#include <stdio.h>

int main(void){
	int i = 1;
	printf("Initialize i to 1:\ni = %d\n", i);
	// prints 1
	printf("Postdecrement i:\ni = %d\n", i--);
	// prints 0
	printf("After postdecrementing:\ni = %d\n\n", i);

	i = 1;
	printf("Set i to 1:\ni = %d\n", i);
	// prints 0
	printf("Predecrement i:\ni = %d\n", --i);
	// prints 0
	printf("After predecrementing:\ni = %d", i);

	return 0;
}