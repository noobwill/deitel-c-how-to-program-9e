// roll a six-sided die 60 million times

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 7

int main(void){
	// seed random number generator
	srand(time(NULL));

	// initialize all frequency counts to 0
	int frequency[SIZE] = {0};

	// roll die 60m times
	for (int roll = 1; roll <= 60000000; roll++){
		size_t face = 1 + rand() % 6;
		// no switch statement required
		frequency[face]++;
	}

	printf("%s%17s\n", "Face", "Frequency");

	// output frequency elements 1-6 in tabular format
	for (size_t face = 1; face < SIZE; face++){
		printf("%4zu%17d\n", face, frequency[face]);
	}
}