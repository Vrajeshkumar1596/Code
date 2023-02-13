#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Zahl, n;
    printf("Ganzzahlige Teiler:\n");
    while(1)
    {
        printf("\nGeben Sie eine positive Zahl ein: ");
        scanf("%i",&Zahl);
        printf("Die ganzzahligen Teiler sind:\n");
        n = 0;
        for(int i = 1; i< ((Zahl/2)+1); i++){
                if((Zahl%i)==0)
                {
                    printf("%i,",i);
                    n++;
                }

        }
        printf("\n Es gibt %i ganzzahlinge Teiler der Zahl %i. \n",n,Zahl);
    }
    return 0;
}
