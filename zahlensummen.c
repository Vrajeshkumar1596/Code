#include <stdio.h>
#include <stdlib.h>

int main()
{
    int summe = 0;
    int zahl = 0;
    do{
        summe += zahl ;
        zahl++;
        }
        while(zahl<=100);
        printf("Die Summe der zahlen von 0 bis 100 ist: %i",summe);



        return 0;
}
