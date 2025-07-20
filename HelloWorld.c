#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(){

    for(int i = 1; i <= 22; i++)
    {   
        if(i == 13)
        {
            continue;
        }
        printf("%d\n",i);

        if(i == 21)
        {
            break;
        }
    }
    
    return 0;
}
