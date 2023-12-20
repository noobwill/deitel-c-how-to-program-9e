#include <stdio.h>

int main(void){
	int x;
	int y;
	printf("%s", "Enter two integers: ");
	scanf("%d%d", &x, &y);
	printf("Sum of x and y is %d\n", x + y);
	printf("Product of x and y is %d\n", x * y);
	printf("Difference of x and y is %d\n", x - y);
	printf("Quotient of x and y is %d\n", x / y);
	printf("Remainder of x / y is %d\n", x % y);
}