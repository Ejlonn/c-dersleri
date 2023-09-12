#include <stdio.h>
#include <string.h>

typedef struct address 
{
    char neighbour[15];
    char street[20];
    char avenue[15];
}address;

struct student
{
    char name[20];
    char surname[20];
    int id;
    int age;
    address address;

};

int main(){

  
    struct student student1;
    strcpy(student1.name,("Batuhan\n"));
    printf("%s",student1.name);
    strcpy(student1.surname,("Kaya"));
    student1.id = 1002;
    student1.age = 21;
    strcpy(student1.address.neighbour,("Selcuklu mah."));
    strcpy(student1.address.street,("Kuskonmaz sk."));
    strcpy(student1.address.avenue,("18/8 Sincan."));
    printf("%s , %s, %s,",student1.address.neighbour,student1.address.street,student1.address.avenue);

    return 0;   
}