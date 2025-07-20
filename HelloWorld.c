#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main(){
    
    int age;

    printf("Age:");
    scanf("%d", &age);

    if(age >= 18){
      
        printf("\n>18");

    }else if(age < 0){

        printf("\n<0");

    }else{

        printf("\n<18");

    }

    

    return 0;
}