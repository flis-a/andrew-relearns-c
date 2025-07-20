#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(){

    int row;
    int col;  
    char sym;

    printf("Enter row #: ");
    scanf("%d",&row);

    printf("Enter column #: ");
    scanf("%d",&col);

    printf("Enter symbol: ");
    scanf(" %c",&sym);    

    for (int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++){

            printf("%c",sym);

        }  
        printf("\n");
    }
    
    return 0;
}
