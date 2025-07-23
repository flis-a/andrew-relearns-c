#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

typedef struct
{
    char name[15];
    float GPA;

}Student;

int main(){

    Student s1 = {"John Wick",4.0};
    Student s2 = {"Peter Griffin",2.2};
    Student s3 = {"Spongebob",3.4};
    Student s4 = {"Batman",5.0};

    Student students[] = {s1,s2,s3,s4};

    for(int i = 0; i < sizeof(students)/sizeof(students[1]); i++){
        printf("%-15s\t%0.2f\n",students[i].name,students[i].GPA);
    }

    return 0;
}
