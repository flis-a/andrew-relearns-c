#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void hello(char[], int);

int main(){

    char name[] = "Andrew";
    int age = 24;

    hello(name, age);

    return 0;
}

void hello(char name[], int age)
{
    printf("\n%s",name);
    printf("\n%d",age);
}