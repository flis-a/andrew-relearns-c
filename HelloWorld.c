#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int findMax(int x, int y)
{
    //(condition) ? value_if_true : value_if_false;
    return (x > y) ? x : y;
}

int main(){

    int max = findMax(3,4);
    printf("\n%d",max);

    return 0;
}