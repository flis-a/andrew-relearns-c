#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){
    
    char name[25];
    int z;
    
    printf("\nEnter Name:\n");
    fgets(name, 25, stdin);

    printf("\npick a number:\n");
    scanf("%d", &z);

    name[strlen(name)-1] = '\0';

    printf("You are %s #%d",name, z);


    return 0;
}