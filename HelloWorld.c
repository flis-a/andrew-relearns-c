#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main(){
    
    double A;
    double B;
    double C;

    printf("Side A:");
    scanf("%lf", &A);

    printf("Side B:");
    scanf("%lf", &B);

    C = sqrt(A*A + B*B);

    printf("Side C: %lf", C);

    return 0;
}