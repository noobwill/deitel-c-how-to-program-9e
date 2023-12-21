/*
* (Table of Squares and Cubes)
* While exercising, you can use a heart-rate monitor to see that your heart rate stays within a safe range suggested by your doctors and trainers.
* According to the American Heart Association (AHA), the formula for calculating your maximum heart rate in beats per minute is 220 minus your age in years.
* Your target heart rate is 50–85% of your maximum heart rate.
* Write a program that prompts for and inputs the user’s age and calculates and displays the user’s maximum heart rate and the range of the user’s target heart rate.
*/

#include <stdio.h>

int main(void){
	printf("%s", "Enter your age: ");
	int age;
	scanf("%d", &age);

	int max = 220 - age;
	printf("Maximum heart rate: %d\n", max);
	printf("Safe range: %d - %d\n", max / 2, (17 * max) / 20);

	return 0;
}