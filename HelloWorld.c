#include <stdio.h>

int main(){

    short a = 'X';
    int b = 'Y';
    double c = 'Z';

    printf("A - %d bytes\n", sizeof(a));
    printf("%p\n",&a);
    printf("B - %d bytes\n", sizeof(b));
    printf("%p\n",&b);
    printf("C - %d bytes\n", sizeof(c));
    printf("%p\n",&c);

    char d;
    char e[8];

    printf("D - %d bytes\n", sizeof(d));
    printf("%p\n",&d);
    printf("E - %d bytes\n", sizeof(e));
    printf("%p\n",&e);


    return 0;
}
