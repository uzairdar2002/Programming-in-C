#include <stdio.h>

int main()
{
  int avg, sum = 0;

  int i;
  int marks[30]; /* Array Declaration*/
  for (i = 0; i < 29; i++)
  {
    printf("Enter Marks: ");
    scanf("%d", &marks[i]); /* Store data in Array*/
  }
  for (i = 0; i < 29; i++)
  {
    sum = sum + marks[i];
    avg = sum/30;
    printf("Average marks = %d\n", avg);
  }
  
}
