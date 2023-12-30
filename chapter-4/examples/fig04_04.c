/*
* Application: Compound - Interest Calculations
* This example computes compound interest using the for statement.
* Consider the following problem statement:
* A person invests $1000.00 in a savings account yielding 5% interest.
  Assuming all interest is left on deposit in the account, calculate and print the amount of money in the account at the end of each year for 10 years.
	Use the following formula for determining these amounts:
	a = p(1 + r)^n
	where
	p is the original amount invested (i.e., the principal, $1000.00 here),
	r is the annual interest rate (for example, .05 for 5%),
	n is the number of years, which is 10 here, and
	a is the amount on deposit at the end of the nth year.
*/

#include <stdio.h>
#include <math.h>

int main(void){
	double principal = 1000.0; // starting principal
	double rate = 0.05; // annual interest rate

	// output table column heads
	printf("%4s%21s\n", "Year", "Amount on deposit");

	// calculate amount on deposit for each of ten years
	for (int year = 1; year <= 10; year++){
		//calculate new amount for specified year
		double amount = principal * pow(1.0 + rate, year);
		// output one table row
		printf("%4d%21.2f\n", year, amount);
	}
}