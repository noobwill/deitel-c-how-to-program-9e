/*
* (Credit-Limit Calculator)
* 
* Develop a C program that will determine whether a department-store customer has exceeded the credit limit on a charge account.
* For each customer, the following facts are available:
* (a) Account number
* (b) Balance at the beginning of the month
* (c) Total of all items charged by this customer this month
* (d) Total of all credits applied to this customer's account this month
* (e) Allowed credit limit
*
* The program should use scanf to input each fact, calculate the new balance (= beginning balance + charges � credits), and determine whether the new balance exceeds the customer's credit limit. 
* 
* For those customers whose credit limit is exceeded, the program should display the customer's account number, credit limit, new balance and the message �Credit limit exceeded.�
* 
* Here is a sample input/output dialog:
* Enter account number (-1 to end): 100
  Enter beginning balance: 5394.78
  Enter total charges: 1000.00
  Enter total credits: 500.00
  Enter credit limit: 5500.00
  Account:      100
  Credit limit: 5500.00
  Balance:      5894.78
  Credit Limit Exceeded.

  Enter account number (-1 to end): 200
  Enter beginning balance: 1000.00
  Enter total charges: 123.45
  Enter total credits: 321.00
  Enter credit limit: 1500.00
  
  Enter account number (-1 to end): 300
  Enter beginning balance: 500.00
  Enter total charges: 274.73
  Enter total credits: 100.00
  Enter credit limit: 800.00

  Enter account number (-1 to end): -1
*/

#include <stdio.h>

int main(void){
  int account;
  double balance, charges, credits, creditLimit;

  printf("%s", "Enter account number (-1 to end): ");
  scanf("%d", &account);

  while (account != -1){
    printf("%s", "Enter beginning balance: ");
    scanf("%lf", &balance);

    printf("%s", "Enter total charges: ");
    scanf("%lf", &charges);

    printf("%s", "Enter total credits: ");
    scanf("%lf", &credits);

    printf("%s", "Enter credit limit: ");
    scanf("%lf", &creditLimit);

    if (balance + charges - credits > creditLimit){
      printf("Account: %d\n", account);
      printf("Credit limit: %.2f\n", creditLimit);
      printf("Balance: %.2f\n", balance);
      puts("Credit Limit Exceeded.");
    }

    printf("%s", "\nEnter account number (-1 to end): ");
    scanf("%d", &account);
  }
}