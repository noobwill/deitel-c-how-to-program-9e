#include <stdio.h>

void staticArrayInit(void);
void automaticArrayInit(void);

int main(void){
	puts("First call to each function:");
	staticArrayInit();
	automaticArrayInit();

	puts("\n\nSecond call to each function:");
	staticArrayInit();
	automaticArrayInit();
	puts("");	
}

// function to demonstrate a static local array
void staticArrayInit(void){
	// initialize elements to 0 before the function is called
	static int array1[3];
	
	puts("\nValues on entering staticArrayInit:");

	// output contents of array1
	for (size_t i = 0; i <= 2; i++){
		printf("array1[%zu] = %d  ", i, array1[i]);
	}

	puts("\nValues on exiting staticArrayInit:");

	// modify and output contents of array1
	for (size_t i = 0; i <= 2; i++){
		printf("array1[%zu] = %d  ", i, array1[i] += 5);
	}
}

// function to demonstrate an automatic local array
void automaticArrayInit(void){
	// initialize elements each time function is called
	int array2[3] = {1, 2, 3};

	puts("\nValues on entering automaticArrayInit:");

	// output contents of array2
	for (size_t i = 0; i <= 2; i++){
		printf("array2[%zu] = %d  ", i, array2[i]);
	}

	puts("\nValues on exiting automaticArrayInit:");

	// modify and output contents of array2
	for (size_t i = 0; i <= 2; i++){
		printf("array2[%zu] = %d  ", i, array2[i] += 5);
	}
}