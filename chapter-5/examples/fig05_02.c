// finding the maximum of three integers

#include <stdio.h>

int maximum(int x, int y, int z);

int main(void){
	int num1, num2, num3;

	printf("%s", "Enter three integers: ");
	scanf("%d%d%d", &num1, &num2, &num3);

	// num1, num2, num3 are arguments to the maximum function call
	printf("Maximum is: %d\n", maximum(num1, num2, num3));
}

// maximum function definition
int maximum(int x, int y, int z){
	int max = x;
	
	if (y > max){
		max = y;
	}
	if (z > max){
		max = z;
	}
	
	return max;
}