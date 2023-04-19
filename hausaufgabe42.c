#include <stdio.h>
int year = 0;

int main()
{
printf("Which year do you want to check:");
scanf("%d",&year);

if(year % 400 == 0 && year % 4 == 0)
{
 printf("%d is a leap year", year);   
}
else if(year % 100 == 0)
{
  printf("%d is not a leap year", year);
}
else
{
printf("%d is not a leap year", year);
}
}