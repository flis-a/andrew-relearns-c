#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(){

    /*
    int num[2][3] = {
                        {1, 2, 3},
                        {4, 5, 6}
                    };
    */

    int num[2][3];
    int row = sizeof(num)/sizeof(num[0]);
    int col = sizeof(num[0])/sizeof(num[0][0]);

    num[0][0] = 1;
    num[0][1] = 2;
    num[0][2] = 3;
    num[1][0] = 4;
    num[1][1] = 5;
    num[1][2] = 6;

    for(int i = 0; i<row; i++){

        for(int j = 0; j<col; j++){
            
            printf("%d ",num[i][j]);

        }
        printf("\n");

    }

    
    return 0;
}
