#include <stdio.h>
#define MAX1 10
#define MAX2 15

struct student
{
   int matriculationnumber;
   char name[MAX1];
   int grades[MAX2];

};

int main()
{
struct student luca = {.name ="Luca",.matriculationnumber = 9847729 };
printf("The name of the student is %s and the matriculation number is %d\n",luca.name,luca.matriculationnumber);



}