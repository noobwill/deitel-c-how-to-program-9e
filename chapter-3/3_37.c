/*
* (Detecting Multiples of 10)
* Write a program that prints 100 asterisks, one at a time.
* After every tenth asterisk, print a newline character.
* Hint: Count from 1 to 100. Use the % operator to recognize each time the counter reaches a multiple of 10.
*/

#include <stdio.h>

int main(void){
	int count = 1;
	while (count <= 100){
		if (count % 10 == 0){
			printf("%s", "*\n");
		}
		else{
			printf("%s", "*");
		}
		count++;
	}

	return 0;
}