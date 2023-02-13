#include <stdio.h>
#include <stdlib.h>

int main()
{
    int zahl,zahl1, zahl2;
    printf("Bitte geben sie zwei zahlen an: ");
    scanf("%i",&zahl1);
    scanf("%i",&zahl2);
    zahl = zahl1 + zahl2;
    printf("%i + %i = %i",zahl1,zahl2,zahl);

    return 0;
}
