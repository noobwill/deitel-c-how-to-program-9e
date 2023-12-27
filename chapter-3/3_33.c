/*
* (Hollow Square of Asterisks)
* Modify the program you wrote in the preceding exercise so that it prints a hollow square. 
* For example, if your program reads a size of 5, it should print
*
* *****
  *   *
  *   *
  *   *
  *****

*/

#include <stdio.h>

int main(void){
  int size;
  printf("%s", "Enter length of square (between 1 and 20): ");
  scanf("%d", &size);

  int row = 0, column = 0;
  while (row < size){
    while (column < size){
      if (row == 0 || row == size - 1){
        printf("%s", "*");
      }
      else{
        if (column == 0 || column == size - 1){
          printf("%s", "*");
        }
        else{
          printf("%s", " ");
        }
      }
      column++;
    }
    puts("");
    row++;
    column = 0;
  }

  return 0;
}