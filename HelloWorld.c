#include <stdio.h>

int main(){
    
    FILE *pF = fopen("test.txt", "w");
    fprintf(pF, "test123\n");
    fclose(pF);

    /*
    if(remove("test.txt") == 0)
    {
        printf("successfully deleted");
    }else
    {
        printf("fail");
    }
    */

    return 0;
}
