#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(){

    char name[25];

    printf("Enter name: ");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';
    
    while(strlen(name) <= 0){

        printf("Re-enter name: ");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';

    }

    printf("hello, %s ",name);

    return 0;
}
