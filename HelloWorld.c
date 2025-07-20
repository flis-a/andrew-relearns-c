#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main(){
    
    const double PI = 3.14159;
    double radius;
    double circum;
    double area;

    printf("Enter Radius:");
    scanf("%lf", &radius);

    circum = 2 * PI * radius;
    area = PI * radius * radius;

    printf("Circumference: %lf", circum);
    printf("\nArea: %lf", area);

    return 0;
}