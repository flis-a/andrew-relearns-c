#include <stdio.h>
#include <stdbool.h>

int main(){
    
    float pi = 3.14159265359;
    double pi2 = 3.14159265359;
    printf("float:\t%0.15f\n", pi);
    printf("double:\t%0.15lf\n", pi2);

    bool fact = true;
    printf("bool:\t%d\n", fact);

    char letter = 100;
    unsigned char letter2 = 255;
    printf("char:\t%c\n", letter); 
    printf("char2:\t%d\n", letter2); 

    return 0;
}