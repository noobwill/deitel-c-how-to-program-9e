// array name is the same as the address of the array's first element
#include <stdio.h>

int main(void){
	// define an array of size 5;
	char array[5] = "";

	printf("    array = %p\n&array[0] = %p\n   &array = %p\n", array, &array[0], &array);
}