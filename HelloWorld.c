#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


double square(double x)
{
    double r = x * x;
    printf("this is a test.");
    return r;
    
}

int main(){

    double num = square(10.0);
    printf("\n%lf",num);

    return 0;
}