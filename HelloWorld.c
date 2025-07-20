#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(){
    
    char unit;
    float temp;
    
    printf("\nF or C:");
    scanf("%c",&unit);

    unit = toupper(unit);

    if(unit == 'C'){
         printf("C:");
         scanf("%f",&temp);
         temp = (temp* 9/5)+32;
         printf("F:%f",temp);

    }else if(unit == 'F'){
         printf("F:");
         scanf("%f",&temp);
         temp = ((temp-32)*5)/9;
         printf("C:%f",temp);

    }else{
        printf("None\n");
    }

    return 0;
}