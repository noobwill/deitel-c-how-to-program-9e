/*
* (Tabular Output)
* Write a program that uses looping to print the following table of values.
* Use the tab escape sequence, \t, in the printf statement to separate the columns with tabs.
*/

#include <stdio.h>

int main(void){
	printf("%s", "N\t10*N\t100*N\t1000*N\n\n");

	int n = 1;

	while (n <= 10){
		printf("%d\t%d\t%d\t%d\n", n, n * 10, n * 100, n * 1000);
		n++;
	}
	
	return 0;
}