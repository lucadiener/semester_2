#define MAX 5
#include <stdio.h>

int grades[]={1,2,3,4,2};
float mittelwert=0;

int main()
{
for(int i=0; i<MAX; i++)
{
 mittelwert=mittelwert +grades[i];   
}

mittelwert=mittelwert/5;
printf("%.1f\n", mittelwert);

return 0;

}