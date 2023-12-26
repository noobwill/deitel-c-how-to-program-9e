/*
* (Tabular Output)
* Write a program that utilizes looping to produce the following table of values:
* A    A+2    A+4    A+6
  3    5      7      9
  6    8      10     12
  9    11     13     15
  12   14     16     18
  15   17     19     21
*/

#include <stdio.h>

int main(void){
  printf("%s", "A\tA+2\tA+4\tA+6\n\n");

  int num = 3;
  int firstCounter = 0;
  while (firstCounter < 5){
    int secondCounter = 0;
    while (secondCounter < 4){
      printf("%d", num);
      if (secondCounter < 3){
        printf("%s", "\t");
      }
      else{
        puts("");
      }
      num = num + 2;
      secondCounter++;
    }
    num = num - 5;
    firstCounter++;
  }
  
  return 0;
}