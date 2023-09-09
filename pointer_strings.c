#include <stdio.h>


int mystrlen(char *p);


int main(){

    char chr[] = "tura";
    printf("%d",mystrlen(chr));

    return 0;
}


int mystrlen(char *p){
    
    int sum=0;
    int i=0;
    for (; p[i] != '\0';i++){
        sum ++;

    }
 
    return sum;

}

