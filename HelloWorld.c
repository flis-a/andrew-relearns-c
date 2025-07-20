#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(){

    int num;

    printf("Enter num: ");
    scanf("%d", &num);
    
    for(int i = 0; i <= num; i+=2)
    {
        printf("\nNum:\t%d",i);
    }

    return 0;
}
