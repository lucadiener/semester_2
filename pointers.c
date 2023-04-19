#include <stdio.h>

int i, j;
int *p;

int main()
{
printf("Wert von Pointer p %p\n",p);
    p=&i;
printf("Wert der Adresse auf i: *p = %d, p points to %p\n",*p, p);
    *p=10;
printf("Der Wert von p ist: *p=%d, pzeigt auf %p\n", *p, p);
    j=i;
printf("i=%d, j=%d, wert: *p=%d, p zeigt auf %p\n",i,j,*p,p);

struct struct1
{
    float mathe1, physik1;
}
    grades = {.mathe1=2.2, .physik1=1.8};

struct struct1 *pstruct2 = &grades;
printf("Structure value: mathe1=%.1f; structure value physik1=%.1f\n", grades.mathe1, pstruct2->physik1);
printf("size of char %lu\n",sizeof(char));
printf("size of Adresse char: %lu\n, ",sizeof(char*));
}