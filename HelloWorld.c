#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(){
    
    float temp = 25;
    bool apple = false;

    if(temp != 0 && !apple){
        printf("\nGood");
    }else{
        printf("\nBad");
    }

    return 0;
}