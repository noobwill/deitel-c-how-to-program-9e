// passing arrays and individual array elements to functions
#include <stdio.h>
#define SIZE 5

void modifyArray(int b[], size_t size);
void modifyElement(int e);

int main(void){
	// initialize array a
	int a[SIZE] = {0, 1, 2, 3, 4};

	puts("Effects of passing entire array by reference:\n\nThe values of the original array are:");

	// output original array
	for (size_t i = 0; i < SIZE; i++){
		printf("%3d", a[i]);
	}

	puts("");

	// pass a to modifyArray by reference
	modifyArray(a, SIZE);
	puts("The values of the modified array are:");

	// output modified array
	for (size_t i = 0; i < SIZE; i++){
		printf("%3d", a[i]);
	}

	// output value of a[3]
	printf("\n\n\nEffects of passing array element by value:\n\nThe value of a[3] is %d\n", a[3]);

	// pass array element a[3] by value
	modifyElement(a[3]);

	// output value of a[3]
	printf("The value of a[3] is %d\n", a[3]);
}

// in modifyArray, b points to the original array a in memory
void modifyArray(int b[], size_t size){
	for (size_t i = 0; i < size; i++){
		// multiply each array element by 2
		b[i] *= 2;
	}
}

// in modifyElement, e is a local copy of array element
void modifyElement(int e){
	// multiply parameter by 2
	e *= 2;
	printf("Value in modifyElement is %d\n", e);
}