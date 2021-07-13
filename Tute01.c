/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1,mark2;
  float avg=0;

  printf("Input marks of two subjects : ");
  scanf("%d %d",&mark1,&mark2);
  avg=(float)(mark1+mark2)/2.0;

  printf("Avarage of subject marks : %.2f",avg);

  return 0;
}

