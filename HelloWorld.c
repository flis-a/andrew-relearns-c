#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


void word(double x, char y[])
{
    printf("this is a test. Code: #%.0lf\n", x);
    printf("%s\n",y);
}

int main(){

    double num = 12345;
    char letters[] = "test";
    
    word(num, letters);
    word(num, letters);
    word(num, letters);

    return 0;
}