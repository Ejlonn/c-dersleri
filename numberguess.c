#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100
#define MIN 1


int main(){

    int guess, guesses, answer;
    srand(time(0)); //

    answer = (rand() % MAX) + MIN;

   do{
        printf("Guess the Number!:");
        scanf("%d",&guess);
        if(guess > answer){
            printf("Your guess is too high!\n");
        }
        else if (guess < answer)
        {
            printf("Your guess is too low!\n");
        }
        else
        {
            printf("CORRECT!\n");
        }
        guesses++;
         
   }while(guess != answer); 
    
    printf("*****************************\n");
    printf("Answer is: %d\n",answer);
    printf("Total guesses : %d\n",guesses);
    printf("\n*****************************\n");


    return 0;
}