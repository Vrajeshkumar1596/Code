#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    while(1){
    printf("Bitte geben sie ein Zahl an: ");
    scanf("%i",&a);
    printf("Bitte geben sie andere Zahl an: ");
    scanf("%i",&b);

    if(a>b){
        printf("%i ist größer als %i.\n",a,b);
    }
    else if(b>a){
        printf("%i ist kleiner als %i.\n",a,b);
    }else{
        printf("%i und %i sind gleich.\n",a,b);
    }
    }
    return 0;
}
