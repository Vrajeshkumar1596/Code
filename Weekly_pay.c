#include <stdio.h>
#include <stdlib.h>


int main()
{
    int number_of_hours, gross_pay;
    float taxes, net_amount;

    printf("Please enter the number of hours work in a week: ");
    scanf("%d",&number_of_hours);

    if(number_of_hours > 40)
        {
        gross_pay = (number_of_hours - 40)*18 + (40*12);
        }
        else{
        gross_pay = number_of_hours*12;
        }

    if(gross_pay<=300){
            taxes = gross_pay*0.15;
    }else if(gross_pay<=450){
        taxes =(300*0.15) + (gross_pay-300)*0.2;
    }else{
        taxes =(300*0.15) + (150*0.2) + (gross_pay - 450)*0.25;
    }

    net_amount = (gross_pay - taxes);

    printf("Your gross pay this Week is : %d\n", gross_pay);
    printf("Your Taxes this Week is : %f\n", taxes);
    printf("Your net Pay this week is : %f\n", net_amount);
    return 0;
}
