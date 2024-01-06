// initializing the elements of an array with an initializer list

#include <stdio.h>

int main(void){
	// initialize n with initializer list
	int n[5] = {32, 27, 64, 18, 95 };

	printf("%s%8s\n", "Element", "Value");

	// output contents of n in tabular format
	for (size_t i = 0; i < 5; i++){
		printf("%7zu%8d\n", i, n[i]);
	}
}