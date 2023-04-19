#include <stdio.h>

int value = 90;
int percentage = 11;
float prozent = 0;
float produkt = 0;

int main()
{
    prozent = (float)percentage /100;
    produkt = prozent * value;
    printf("%d%c of %d equals %.1f ! " ,percentage, '%', value, produkt );

}