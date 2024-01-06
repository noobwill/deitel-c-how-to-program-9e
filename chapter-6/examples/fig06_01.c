// initializing the elements of an array to zeros
#include <stdio.h>

int main(void){
	int n[5];

	// set elements of n to 0
	for (size_t i = 0; i < 5; i++){
		// set element at location i to 0
		n[i] = 0;
	}

	// display column headers
	printf("%s%8s\n", "Element", "Value");

	// output contents of n in tabular format
	for (size_t i = 0; i < 5; i++){
			printf("%7zu%8d\n", i, n[i]);
	}
}