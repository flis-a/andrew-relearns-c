#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

enum Day{Sun=1,Mon=2,Tue=3,Wed=4,Thu=5,Fri=6,Sat=7};

int main(){

    enum Day today = Sun;
    //printf("%d\n",today);
    
    if(today == Sun || today == Sat){
        printf("Yay\n");
    }else{
        printf("Boo\n");
    }

    return 0;
}
