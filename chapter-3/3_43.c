/*
* (Sides of a Triangle)
* Write a program that reads three nonzero integer values and determines and prints whether they could represent the sides of a triangle.
*/

#include <stdio.h>

int main(void){
	int x, y, z;
	printf("%s", "Enter three nonzero integers: ");
	scanf("%d%d%d", &x, &y, &z);

	if (x + y > z && x + z > y && y + z > x){
		printf("%s", "Triangle!");
	}
	else{
		printf("%s", "Not a triangle.");
	}
}