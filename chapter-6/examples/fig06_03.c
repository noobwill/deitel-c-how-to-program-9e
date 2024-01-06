// initializing the elements of array s to the even integers from 2 to 10

#include <stdio.h>
#define SIZE 5

int main(void){
	// use symbolic constant SIZE to specify array size
	int s[SIZE] = {0};

	for (size_t i = 0; i < SIZE; i++){
		s[i] = 2 + 2 * i;
	}

	printf("%7s%8s\n", "Element", "Value");

	for (size_t i = 0; i < SIZE; i++){
		printf("%7zu%8d\n", i, s[i]);
	}
}