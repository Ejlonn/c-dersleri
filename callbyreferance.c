#include <stdio.h>

void changevalue(int *a,int *b);// Yerel değişkenler, program çalıştığı sürece varlar,
                              // eğer bunları pointera çevirirsek artık addreste işlem yaparlar  

int main(){

    int x = 5, y = 10;

    printf("x:%d y:%d",x,y);

    changevalue(&x,&y);

    printf("x:%d y:%d",x,y);

    return 0;
}

void changevalue(int *a,int *b){

    int temp;
    
    temp = *a;

    *a = *b;
    
    *b = temp;

    printf("\n(F): a: %d b: %d\n",*a,*b);
}