#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main(){
    
    char grade;

    printf("\nGrade:");
    scanf("%c", &grade);

    switch(grade){
        case 'A':
            printf("\nApple");
            break;
        case 'B':
            printf("\nBapple");
            break;
        case 'C':
            printf("\nCapple");
            break;
        default:
            printf("\nNope!");
    }


    

    return 0;
}