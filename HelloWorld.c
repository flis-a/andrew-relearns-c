#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

//typedef char user[25];

typedef struct
{
    char name[25];
    char password[32];
    int id;

}User;

int main(){

    User user1 = {"Andrew","123",123456789};
    User user2 = {"Banana","456",123456789};

    printf("%s\n",user1.name);
    printf("%s\n",user2.name);

    return 0;
}
