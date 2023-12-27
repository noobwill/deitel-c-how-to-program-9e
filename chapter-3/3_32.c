/*
* (Hollow Square of Asterisks)
* Write a program that reads in the side of a square and then prints that square out of asterisks.
* Your program should work for squares of all side sizes between 1 and 20.
* For example, if your program reads a size of 4, it should print
* 
* ****
  ****
  ****
  ****
*/

#include <stdio.h>

int main(void){
  int size;
  printf("%s", "Enter length of square (between 1 and 20): ");
  scanf("%d", &size);

  int row = 0, column = 0;
  while (row < size){
    while (column < size){
      printf("%s", "*");
      column++;
    }
    puts("");
    row++;
    column = 0;
  }
}