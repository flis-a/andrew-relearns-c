#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(){

    char cars[][10] = {"Mustang","Corvette","Porche"};

    strcpy(cars[0], "Telsa");

    for(int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++){

        printf("%s\n",cars[i]);

    }
    
    return 0;
}
