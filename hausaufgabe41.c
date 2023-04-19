#include <stdio.h>



float summe =0;
int var =0;
int main()
{
int grades[10]={1,2,3,4,5,6};


if (1>=grades[10]<=6)
{
    printf("Grades are valid!\n");
}
else 
{
    printf("Grades are not valid\n");
}
for(int i =0;grades[i]<=10;i++)
{
     summe = summe + grades[i];
     var++;
}
    float mittelwert = summe / var;
    printf("Average:%.1f\n", mittelwert);
}


