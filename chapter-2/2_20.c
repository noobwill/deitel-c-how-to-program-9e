/*
* (Circle Area, Diameter and Circumference)
* For a circle of radius 2, display the diameter, circumference and area.
* Use the value 3.14159 for pi.
* Use the following formulas (r is the radius): diameter = 2r, circumference = 2*pi*r and area = pi*r^2.
* Perform each of these calculations inside the printf statement(s) and use the conversion specification %f.
*/

#include <stdio.h>

int main(void){
	printf("%s", "Enter an integer for radius of circle: ");
	int r = 0;
	scanf("%d", &r);

	printf("Diameter: %d", 2 * r);
	printf("\nCircumuference: %f", 2 * 3.14159 * r);
	printf("\nArea: %f\n", 3.14159 * r * r);
}