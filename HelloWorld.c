#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    const int MIN = 1;
    const int MAX = 100;
    int guess;
    int guesses = 0;
    int answer;
    
    srand(time(0));

    answer = (rand() % MAX) + MIN;

    do{

        printf("Guess: ");
        scanf("%d",&guess);

        if(guess > answer){

            printf("To High!\n");

        }else if(guess < answer){

            printf("To Low!\n");

        }else{

            printf("WINNER!\n");

        }

        guesses++;

    }while(guess != answer);

    printf("You guessed %d, in %d tries!\n",answer,guesses);

    return 0;
}
