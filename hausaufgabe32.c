#include <stdio.h>

int number1 = 1;
int number2 = 2;
int *p1 = 0;
int *p2 = 0;
int swap = 0;

int main()
{
p1 = &number1;
p2 = &number2;
printf ("number1 is:%d and number2 is:%d\n", *p1, *p2);    


swap = *p1;
*p1 = *p2;
*p2 = swap;

printf ("new number1 is:%d and new number2 is:%d\n", *p1, *p2); 


}