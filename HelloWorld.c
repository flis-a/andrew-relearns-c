#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(){

    int num = 0;
    int sum = 0;  
    
    do{

        printf("Enter # > 0: ");
        scanf("%d",&num);
        if(num > 0){
            sum += num;
        }
        
    }while(num > 0);

    printf("Sum: %d ",sum);

    return 0;
}
