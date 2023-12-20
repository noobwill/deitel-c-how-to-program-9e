/*
* (Arithmetic, Largest Value and Smallest Value)
* Write a program that inputs three different integers from the keyboard, then displays the sum, the average, the product, the smallest and the largest of these numbers.
* Use only the single - selection form of the if statement
* The screen dialogue should appear as follows:
  Enter three different integers : 13 27 14
  Sum is 54
  Average is 18
  Product is 4914
  Smallest is 13
  Largest is 27
*/

#include <stdio.h>

int main(void){
  // prompt
  printf("%s", "Enter three different integers: ");

  // read and store
  int x, y, z;
  scanf("%d%d%d", &x, &y, &z);

  // sum
  printf("Sum is %d", x + y + z);

  // average
  printf("\nAverage is %d", (x + y + z) / 3);

  // product
  printf("\nProduct is %d", x * y * z);
   
  // min
  int min = x;
  if (y < min){
    min = y;
  }
  if (z < min){
    min = z;
  }
  printf("\nSmallest is %d", min);
   
  // max
  int max = x;
  if (y > max){
    max = y;
  }
  if (z > max){
    max = z;
  }
  printf("\nLargest is %d\n", max);
}