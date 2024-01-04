// Creating and using a function
#include <stdio.h>

// function prototype
int square(int number);

int main(void){
	// loop 10 times to calculate and output square of x each time
	for (int x = 1; x <= 10; x++){
		// function call
		printf("%d ", square(x));
	}
	puts("");
}

// square function definition returns the square of its parameter
int square(int number){
	return number * number;
}