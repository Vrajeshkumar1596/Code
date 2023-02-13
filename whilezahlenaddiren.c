#include <stdio.h>
#include <stdlib.h>

int main()
{
    int zahl = 0;
    int summe = 0;
    while(1){
            summe = summe + zahl;
            zahl++;
            printf("zahl = %i, summe = %i\n", zahl, summe);

    }
    return 0;
}
