/*
* (Diameter, Circumference and Area of a Circle)
* Write a program that reads the radius of a circle (as a double value) and computes and prints the diameter, the circumference and the area.
* Use the value 3.14159 for pi.
*/

#include <stdio.h>

int main(void){
	double r;
	printf("%s", "Enter radius: ");
	scanf("%lf", &r);

	printf("Diameter of circle: %f\n", 2 * r);
	printf("Circumference of circle: %f\n", 2 * 3.14159 * r);
	printf("Area of circle: %f\n", 3.14159 * r * r);

	return 0;
}