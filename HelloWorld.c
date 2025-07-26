#include <stdio.h>

int main(){
    
    FILE *pF = fopen("words.txt", "r");
    char buffer[255];

    if(pF == NULL){
        printf("UNABLE TO OPEN");
    }else{
        while(fgets(buffer, 255, pF) != NULL)
            {
                printf("%s", buffer);
            }
    }



    fclose(pF);
    return 0;
}
