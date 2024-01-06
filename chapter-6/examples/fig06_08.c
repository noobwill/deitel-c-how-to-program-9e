// strings as character arrays

#include <stdio.h>
#define SIZE 20

int main(void){
	// reserve 20 characters
	char string1[SIZE] = "";
	// reserve 15 characters
	char string2[] = "string literal";

	// prompt for string from user then read it into string1
	printf("%s", "Enter a string (no longer than 19 characters): ");
	scanf("%19s", string1);

	// output strings
	printf("string1 is %s\nstring2 is %s\n", string1, string2);

	// output characters in string1 until character is reached
	for (size_t i = 0; i < SIZE && string1[i] != '\0'; i++){
		printf("%c", string1[i]);
	}

	puts("");
}