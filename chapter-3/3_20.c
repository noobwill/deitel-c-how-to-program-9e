/*
* (Salary Calculator)
* Develop a program that will determine the gross pay for each of several employees.
* The company pays �straight time� for the first 40 hours worked by each employee and pays �time-and-a-half� for all hours worked in excess of 40 hours.
* You�re given a list of the company�s employees, the number of hours each worked last week and each employee�s hourly rate.
* Your program should use scanf to input this information for each employee and determine and display the employee�s gross pay.
* Here is a sample input/output dialog:
* Enter # of hours worked (-1 to end): 39
  Enter hourly rate of the worker ($00.00): 10.00
  Salary is $390.00

  Enter # of hours worked (-1 to end): 40
  Enter hourly rate of the worker ($00.00): 10.00
  Salary is $400.00

  Enter # of hours worked (-1 to end): 41
  Enter hourly rate of the worker ($00.00): 10.00
  Salary is $415.00

  Enter # of hours worked (-1 to end): -1
*/

#include <stdio.h>

int main(void){
  int hours;
  printf("%s", "Enter # of hours worked (-1 to end): ");
  scanf("%d", &hours);

  while (hours != -1){
    double rate;
    printf("%s", "Enter hourly rate of the worker ($00.00): ");
    scanf("%lf", &rate);

    double OTRate = rate * 1.5;
    double salary;
    if (hours > 40){
      salary = (40 * rate) + ((hours - 40) * OTRate);
    }
    else{
      salary = hours * rate;
    }

    printf("Salary is $%.2f\n\n", salary);

    printf("%s", "Enter # of hours worked (-1 to end): ");
    scanf("%d", &hours);
  }

  return 0;
}