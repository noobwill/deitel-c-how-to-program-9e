/*
* (Comparing Integers)
* Write a program that reads two integers from the user then displays the larger number followed by the words “is larger.”
* If the numbers are equal, display the message “These numbers are equal.”
* Use only the single-selection form of the if statement
*/

#include <stdio.h>
int main(void){
	// prompt user
	printf("%s", "Enter two integers: ");

	// read and store
	int x, y;
	scanf("%d%d", &x, &y);

	if (x == y){
		puts("These numbers are equal.");
	}

	if (x > y){
		printf("%d is larger than %d.\n", x, y);
	}

	if (x < y){
		printf("%d is smaller than %d.\n", x, y);
	}
}