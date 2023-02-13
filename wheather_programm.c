#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rainfall [5][12] = {
        {34,32,31,35,32,33,32,37,31,39,30,31},
        {33,34,32,35,33,33,32,31,35,35,36,38},
        {43,42,46,43,48,41,40,43,47,49,42,46},
        {44,43,43,33,54,47,44,41,38,39,44,34},
        {30,31,32,30,30,34,33,31,36,37,31,32}
    };
    int year[5] = {2010,2011,2012,2013,2014};
    float sum = 0;
    float Total;
    float Month_sum;

    printf("YEAR        RAINFALL (inches)\n" );

    for(int i=0; i<5 ; i++){

            for(int j=0; j<12 ; j++){
                sum += rainfall[i][j];
            }

            sum = sum/12;
            printf("%5d         %15.1f\n",year[i],sum);
            Total += sum;
    }
    Total = Total/5;



    printf("The yearly average is %.1f inches.\n\n",Total/5);



    printf("MONTHLY AVERAGES: \n\n");

   printf("Jan   Feb   Mar   Apr   May   Jun   Jul   Aug   Sep   Oct   Nov   Dec \n");

    for(int k = 0; k <12 ; k++){
        for(int l = 0 ; l<5 ; l++){
            Month_sum += rainfall[l][k];
        }
        Month_sum = Month_sum/5;
        printf("%4.1f  ",Month_sum);
    }

    return 0;
}
