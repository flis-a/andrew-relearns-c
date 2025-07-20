#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(){

    double prices[] = {5.0,10.0,15.0,20.0,25.0};

    for(int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++){

        printf("\t$%0.2lf\n",prices[i]);

    }

    return 0;
}
