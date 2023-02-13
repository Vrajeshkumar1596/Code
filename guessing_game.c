#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int tries = 5;
    int guess = 0;
    int randomNumber = 0;
    time_t t;

    srand((unsigned)time(&t));

    randomNumber = rand()%21;

    printf("This is a guessing game.\n");
    printf("I had chosen a number between 0 and 20 which you must guess.\n");

    while(tries !=0)
    {
        printf("You have %i tries left.\n",tries);
        printf("Enter a guess: ");
        scanf("%i",&guess);

        if(guess >=0 && guess <=20){

            if(guess == randomNumber){printf("Congratulations. You guessed it!!"); return;}
            else if(guess > randomNumber){printf("Sorry,%i is wrong. My number is less than that.\n\n",guess);}
            else if(guess < randomNumber){ printf("Sorry,%i is wrong. My number is greater than that.\n\n",guess);}
            tries--;

        }else{
            printf("Please enter the number between 0 and 20.");
        }

    }
    printf("\n You had five tries and failed. The number was %i\n",randomNumber);

    return 0;
}
