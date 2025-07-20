#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(){

    double prices[5] = {1.0,3.0};
    char name[] = "Andrew";

    prices[2] = 6.0;
    prices[3] = 9.0;
    prices[4] = 12.0;


    printf("$%0.2lf",prices[1]);

    
    return 0;
}
