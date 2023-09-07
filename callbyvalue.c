#include <stdio.h>

void changevalue(int a,int b);// Yerel değişkenler, program çalıştığı sürece varlar

int main(){

    int x = 5, y = 10;

    printf("x:%d y:%d\n",x,y);

    changevalue(x,y);

    printf("x:%d y:%d\n",x,y); // burda bastırıldığı üzere fonksiyonda değerlerim değişmemiş, yani bu call by value.

    return 0;
}

void changevalue(int a,int b){

    int temp = a;
    
    a = b;
    
    b = temp;

    printf("(F)a: %d b: %d\n",a,b);

}