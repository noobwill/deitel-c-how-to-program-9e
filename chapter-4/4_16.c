/*
* (Triangle-Printing Program)
* Write a program that prints the following patterns separately, one below the other.
* Use for loops to generate the patterns.
* All asterisks (*) should be printed by a single printf statement of the form printf("%s", "*"); (this causes the asterisks to print side-by-side).
* Hint: The last two patterns require that each line begin with an appropriate number of blanks.
* https://imgur.com/a/mVkebZt
*/

#include <stdio.h>

int main(void){
	// first pattern
	for (int i = 1; i <= 10; i++){
		for (int j = 0; j < i; j++){
			printf("%s", "*");
		}
		puts("");
	}
	puts("");

	// second pattern
	for (int i = 10; i > 0; i--){
		for (int j = i; j > 0; j--){
			printf("%s", "*");
		}
		puts("");
	}
	puts("");

	// third pattern
	for (int i = 0; i < 10; i++){
		for (int j = 0; j < i; j++){
			printf("%s", " ");
		}
		for (int k = 10 - i; k > 0; k--){
			printf("%s", "*");
		}
		puts("");
	}
	puts("");

	// fourth pattern
	for (int i = 1; i <= 10; i++){
		for (int j = 10; j > i; j--){
			printf("%s", " ");
		}
		for (int k = i; k > 0; k--){
			printf("%s", "*");
		}
		puts("");
	}

	return 0;
}