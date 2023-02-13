#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float silbertaler,Goldtaler;
    float kurs = 0.72;

    for(Goldtaler = 0; Goldtaler <= 100; Goldtaler = Goldtaler + 0.5){
        Goldtaler = Goldtaler / 0.72;
        printf("%5.2f = %f5.2",silbertaler,kurz);
    }
    return 0;
}
