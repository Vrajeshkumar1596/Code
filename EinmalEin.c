#include <stdio.h>
#include <stdlib.h>


int main()
{
    int XA = 0;
 int XB = 0x10;
 int YA = 0x0;
int YB  = 0x10;

    printf("\nHexadezimales EinmalEins:\n\n");
    printf("HEX|");
    for(int i = XA; i<= XB ; i++){
        printf("%4X",i);
    };
    printf("\n");
    printf("---|");

    for(int i= XA; i<= XB ; i++){
        printf("----");
    };
    printf("\n");

    for(int y=YA; y<=YB; y++){
        printf("%3X|",y);
        for(int x= XA; x<= XB ; x++){
            printf("%4X", x*y);
        }
        printf("\n");
    }

    return 0;
}
