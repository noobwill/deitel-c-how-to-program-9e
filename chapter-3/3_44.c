/*
* (Sides of a Right Triangle)
Write a program that reads three nonzero integers and determines and prints whether they could be the sides of a right triangle.
*/

#include <stdio.h>

int main(void){
	int x, y, z;
	printf("%s", "Enter three nonzero integers: ");
	scanf("%d%d%d", &x, &y, &z);

	int xsquare = x * x, ysquare = y * y, zsquare = z * z;

	if (xsquare + ysquare == zsquare || xsquare + zsquare == ysquare || ysquare + zsquare == xsquare){
		printf("%s", "A right triangle!");
	}
	else{
		printf("%s", "Not a right triangle.");
	}

	return 0;
}