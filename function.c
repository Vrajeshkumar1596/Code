#include <stdio.h>
#include <stdlib.h>

int gcd(int n1, int n2){

int temp;

while(n2 != 0)
    {
        temp = n1 %n2;
        n1 = n2;
        n2 = temp;
        }
        return n1;
    }

 float absolutevalue(float x){
 if(x < 0)
    x = -x;
    return x;
 }
float sqaureroot(float x){
    const floar epsilon = .00001;
    float guess = 1.0;


    if(x < 0)
    {
        printf("Negative argument to squreRoot. \n");
        return -1.0;
    }

    while ( absolutevalue (guess * guess - x) >= epsilon)
    guess = (x / guess + guess)/ 2.0;
    float absolutevalue (float x);

    return guess;
}

int main()
{
    int result = 0;

    float f1 = -15.5, f2 = 20.0, f3 = -5.0;
    int i1 = -716;
    float absolutevalueresult = 0.0;


   result = gcd(150,35);
   printf("The gcd of 150 and 35 is %d\n", result);

   result = gcd(83,240);
   printf("The gcd of 83 and 240 is %d\n", result);

   result = gcd(1026,405);
   printf("The gcd of 1026 and 405 is %d\n", result);

   result = absolutevalue (f1);
   printf("result = %.2f\n", result);
   printf("f1 = %.2f\n", f1);



    return 0;
}
