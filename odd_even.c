#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number_to_test , remainder;
    while(1){

    printf("Enter your number to be tested: ");
    scanf("%i", &number_to_test);
    remainder = number_to_test % 2;

    if(remainder==0){
        printf("The number is even.\n");

    }else{
        printf("The number ist odd.\n");

    }
    }
    return(0);



}
