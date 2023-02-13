#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c, teiler;
    printf("Größte gemeinsame Teiler: \n");
    while(1){
        printf("\n Geben Sie zwei positive Zahlen ein : \n");
        scanf("%i %i", &a, &b);
        if(b>a){
            c = a;
            a = b;
            b = c;
        }
        for(teiler = b ; teiler >1 ; teiler--){
                if(((a%teiler)==0)&&((b%teiler)==0)) break;
        }
        printf("Der groesste gemeinsame Teiler von %i und %i ist %i",a,b,teiler);
    }
    return 0;
}
