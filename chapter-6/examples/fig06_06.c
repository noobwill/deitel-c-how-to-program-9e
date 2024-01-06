// using arrays to display a bar chart

#include <stdio.h>
#define SIZE 5

int main(void){
	int n[SIZE] = {19, 3, 15, 7, 11};

	printf("%s%13s%17s\n", "Element", "Value", "Bar Chart");

	// for each element of n, output a bar of the bar chart
	for (size_t i = 0; i < SIZE; i++){
		printf("%7zu%13d%8s", i, n[i], "");

		for (int j = 1; j <= n[i]; j++){
			// print one bar
			printf("%c", "*");
		}

		// end a bar with a newline
		puts("");
	}
}