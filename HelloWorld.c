#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(){
    
    char op;
    double num1;
    double num2;
    double r;

    printf("Operator: ");
    scanf("%c", &op);
    printf("\nnum1: ");
    scanf("%lf", &num1);
    printf("\nnum2: ");
    scanf("%lf", &num2);

    switch (op)
    {
    case '+':
        r = num1 + num2;
        break;

    case '-':
        r = num1 - num2;
        break;

    case '/':
        r = num1 / num2;
        break;

    case '*':
        r = num1 * num2;
        break;

    case '^':
        r = pow(num1, num2);
        break;
    
    default:
        r = 0;
        break;
    }

    printf("\nResult: %lf", r);

    return 0;
}