#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(){

    char x[15] = "Xx";
    char y[15] = "Yy";
    char temp[15];

    strcpy(temp,x);
    strcpy(x,y);
    strcpy(y,temp);

    printf("x = %s\n", x);
    printf("y = %s\n", y);
    
    return 0;
}
