/*
* (Calculating the Value of pi)
* Calculate the value of pi from the infinite series:
* pi = 4 - 4/3 + 4/5 - 4/7 + 4/9 - 4/11 + ...
* Print a table that shows the value of pi approximated by one term of this series, by two terms, by three terms, and so on.
*/

#include <stdio.h>

int main(void){
	int num;
	printf("%s", "Enter number of terms: ");
	scanf("%d", &num);

	// table column headers
	printf("%10s%23s\n", "# of terms", "Approximated value");

	// table rows
	double value = 4;
	int i = 1;
	for (; i <= num; i++){
		if (i % 2 == 1){
			value -= (double) 4 / (i * 2 + 1);
		}
		else{
			value += (double) 4 / (i * 2 + 1);
		}
		printf("%10d%23f\n", i, value);
	}
}