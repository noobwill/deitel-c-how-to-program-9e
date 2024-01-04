// randomizing the die-rolling program

#include <stdio.h>
#include <stdlib.h>

int main(void){
	printf("%s", "Enter seed: ");

	// number used to seed the random number generator
	int seed = 0;
	scanf("%d", &seed);

	// seed the random number generator
	// use srand(time(NULL)); to randomize without entering a seed each time
	srand(seed);

	for (int i = 1; i <= 10; i++){
		// display random die value
		printf("%d ", 1 + (rand() % 6));
	}

	puts("");
}