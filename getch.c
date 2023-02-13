#include <stdio.h>
#include <stdlib.h>


int main()
{
    int zeichen;
    do{
        zeichen = getch();
        putchar(zeichen);
        printf("%i \n", zeichen);
    }while (zeichen != 'Q');

}
