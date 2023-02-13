#include <stdio.h>
#include <stdlib.h>


int main()
{
    int value = 10;
    int *pvalue = 0;

    pvalue = &value;

    printf("The address of the value is %p\n",&value);
    printf("The address of the pointer is %p\n",&pvalue);
    printf("The Wert of the pointer is %p\n",pvalue);
    printf("Value pointed to: %d\n", *pvalue);

    return 0;
}
