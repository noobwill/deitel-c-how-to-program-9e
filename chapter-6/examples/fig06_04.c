// computing the sum of the elements of an array
#include <stdio.h>
#define SIZE 5

int main(void){
	// use an initializer list to initialize an array
	int a[SIZE] = {1, 2, 3, 4, 5};
	int total = 0;

	for (size_t i = 0; i < SIZE; i++){
		total += a[i];
	}

	printf("The total of a's values is %d\n", total);
}