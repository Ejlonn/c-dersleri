#include <stdio.h>

void changevalue(int a,int b);// Yerel değişkenler, program çalıştığı sürece varlar

int main(){

    int x = 5, y = 10;

    changevalue(x,y);

    printf("x:%d y:%d",x,y);

    return 0;
}

void changevalue(int a,int b){

    int temp = a;
    
    a = b;
    
    b = temp;

    printf("a: %d b: %d\n",a,b);

}