/*
* (Checkerboard Pattern of Asterisks)
* Write a program that displays the following checkerboard pattern:
	* * * * * * * *
	 * * * * * * * *
	* * * * * * * *
	 * * * * * * * *
	* * * * * * * *
	 * * * * * * * *
	* * * * * * * *
	 * * * * * * * *

* Your program must use only three output statements, one of each of the following forms:
* printf("%s", "* ");
* printf("%s", " ");
* puts(""); // outputs a newline
*/

#include <stdio.h>

int main(void){
	int row = 0, column = 0;

	while (row < 8){
		if (row % 2 == 1){
			printf("%s", " ");
		}
		while (column < 8){
			printf("%s", "* ");
			column++;
		}
		puts("");
		column = 0;
		row++;
	}

	return 0;
}