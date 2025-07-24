#include <stdio.h>
#include <ctype.h>

int main(){

    char questions[][100] = 
    {"1. 1+1=?",
     "2. 1*1=?",
     "3. 1/1=?"
    };
    
    char options[][100] = 
    {"A. 1","B. 2","C. 0","D. 10",
     "A. 1","B. 10","C. 100","D. 1000",
     "A. 1","B. 10","C. 100","D. 1000",
    };
    char answers[3] = {'B','A','A'};
    int numOfQuestions = sizeof(questions)/sizeof(questions[0]);

    char guess;
    int score = 0;

    printf("MATH TEST:\n");

    for(int i = 0; i < numOfQuestions; i++){
        
        printf("%s\n",questions[i]);
        printf("~~~~~~~~~~~~\n");

        for(int j = (i*4); j < i*4 +4; j++ ){

            printf("%s\t",options[j]);

        }
        printf("\n~~~~~~~~~~~~\n");

        printf("Guess: ");
        scanf("%c", &guess);
        printf("%c"); //figure out why this does work

        guess = toupper(guess);

        if(guess == answers[i]){

            printf("Correct, +1\n");
            score++;

        }else{

            printf("Wrong\n");

        }
        

    }

    printf("Final Score: %d/%d\n", score, numOfQuestions);

    return 0;
}
