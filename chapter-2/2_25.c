/*
* (Integer Value of a Character)
* C can also represent uppercase letters, lowercase letters and a considerable variety of special symbols.
* C uses small integers internally to represent each different character. 
* The set of characters a computer uses together with the corresponding integer representations for those characters is called that computer’s character set.
* You can display the integer equivalent of uppercase A, for example, by executing the statement `printf("%d", 'A');`
* 
* Write a C program that displays the integer equivalents of some uppercase letters, lowercase letters, digits and special symbols.
* At a minimum, determine the integer equivalents of the following:
* A B C a b c 0 1 2 $ * + / and the space character.
*/

#include <stdio.h>

int main(void){
	printf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d\n", 'A', 'B', 'C', 'a', 'b', 'c', '0', '1', '2', '$', '*', '+', '/', ' ');

	return 0;
}