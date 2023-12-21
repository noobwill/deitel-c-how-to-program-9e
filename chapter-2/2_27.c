/*
* (Table of Squares and Cubes)
* Write a program that calculates the squares and cubes of the numbers from 0 to 10 and uses tabs to display the following tables of values:
* 
* number	square	cube
* 0				0				0
* 1				1				1
* 2				4				8
* 3				9				27
* 4				16			64
* 5				25			125
* 6				36			216
*	7				49			343
*	8				64			512
* 9				81			729
* 10			100			1000
*/

#include <stdio.h>

int main(void){
	puts("number\tsquare\tcube");
	printf("0\t%d\t%d\n", 0 * 0, 0 * 0 * 0);
	printf("1\t%d\t%d\n", 1 * 1, 1 * 1 * 1);
	printf("2\t%d\t%d\n", 2 * 2, 2 * 2 * 2);
	printf("3\t%d\t%d\n", 3 * 3, 3 * 3 * 3);
	printf("4\t%d\t%d\n", 4 * 4, 4 * 4 * 4);
	printf("5\t%d\t%d\n", 5 * 5, 5 * 5 * 5);
	printf("6\t%d\t%d\n", 6 * 6, 6 * 6 * 6);
	printf("7\t%d\t%d\n", 7 * 7, 7 * 7 * 7);
	printf("8\t%d\t%d\n", 8 * 8, 8 * 8 * 8);
	printf("9\t%d\t%d\n", 9 * 9, 9 * 9 * 9);
	printf("10\t%d\t%d\n", 10 * 10, 10 * 10 * 10);
}