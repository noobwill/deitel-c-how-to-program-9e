// rolling a six-sided die 60,000,000 times.

#include <stdio.h>
#include <stdlib.h>

int main(void){
	// counters for each roll value
	int f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;

	// loop 60 million times and summarize results
	for (int roll = 1; roll <= 60000000; roll++){
		// random number from 1 to 6
		int face = 1 + rand() % 6;

		// determine face value and increment appropriate counter
		switch (face){
		case 1: // rolled 1
			f1++;
			break;
		case 2: // rolled 2
			f2++;
			break;
		case 3: // rolled 3
			f3++;
			break;
		case 4: // rolled 4
			f4++;
			break;
		case 5: // rolled 5
			f5++;
			break;
		case 6: // rolled 6
			f6++;
			break; // optional
		}
	}

	// display results in tabular format
	printf("%s%13s\n", "Face", "Frequency");
	printf("   1%13d\n", f1);
	printf("   2%13d\n", f2);
	printf("   3%13d\n", f3);
	printf("   4%13d\n", f4);
	printf("   5%13d\n", f5);
	printf("   6%13d\n", f6);
}