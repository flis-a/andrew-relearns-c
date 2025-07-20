#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(){

    char s1[] = "Andrew";
    char s2[] = "aBanana";
    int num = 4;

    //strlwr(s1);
    //strupr(s2);
    //strcat(s1,s2);
    //strncat(s1,s2,num);
    //strcpy(s1,s2);
    //strncpy(s1,s2,num);

    //strset(s1,'*');
    //strnset(s1,'*',1);
    //strrev(s2);

    //num = strlen(s1);
    //num = strcmp(s1,s2);
    //num = strncmp(s1,s2, 1);
    //num = strcmpi(s1,s2);
    num = strnicmp(s1,s2,1);

    printf("\n%s",s1);
    printf("\n%s",s2);
    printf("\n%d",num);

    return 0;
}
