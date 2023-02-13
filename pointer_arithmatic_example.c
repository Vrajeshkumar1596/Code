#include <stdio.h>
#include <stdlib.h>

int stringlength(const char *string);

int main()
{
    printf("%d \n", stringlength("stringLength test"));
    printf("%d \n", stringlength(""));
    printf("%d \n", stringlength("Vrajesh"));



    return 0;
}
int stringlength(const char *string)
{
    const char *lastAddress = string;

    while(*lastAddress)
        ++lastAddress;

    return lastAddress - string;
}
