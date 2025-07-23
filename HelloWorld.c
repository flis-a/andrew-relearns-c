#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(0));

    int num1 = (rand() % 20) + 1;
    int num2 = (rand() % 12) + 1;
    int num3 = (rand() % 6) + 1;

    printf("Dice 1: %d\n",num1);
    printf("Dice 2: %d\n",num2);
    printf("Dice 3: %d\n",num3);

    return 0;
}
