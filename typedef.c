#include <stdio.h>
#include <string.h>

//typedef char user[25];

typedef struct 
{
    char name[25];
    char password[12];
    int id;

}user;

int main(){

        //typedef  = reserved keyword  that gives an existing datatype a "nickname"
        //           yani belli datalara takma ad verip herhangi bi yerde kullanabiliyoz


    user user1 = {"Batuhan","1910",123456789};
    user user2 = {"Kaya","1910",123455789};

    printf("%s\n",user1.name);
    printf("%s\n",user1.password);
    printf("%d\n",user1.id);
    printf("\n");
    printf("%s\n",user2.name);
    printf("%s\n",user2.password);
    printf("%d\n",user2.id);

    return 0;
}