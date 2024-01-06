// recursive factorial function
#include <stdio.h>

unsigned long long int factorial(int number);

int main(void){
	// calculate factorial(i) and display result
	for (int i = 0; i <= 21; i++){
		printf("%d! = %llu\n", i, factorial(i));
	}
}

// recursive definition of factorial
unsigned long long int factorial(int number){
	// base case
	if (number <= 1){
		return 1;
	}
	// recursive step
	return number * factorial(number - 1);
}