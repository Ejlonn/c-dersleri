#include <stdio.h>

int main(){

    int num, temp1 = 0,temp2 = 0, check = 0,ctr=0;

    while(1)
    {
        printf("Sayi giriniz. Cikmak icin negatif sayi girebilirsiniz.");
        
        scanf("%d",&num);
        check++;
        if(num<0) break;

        if(check>2)
        {
            if(num==(temp1+temp2))
            {
                ctr++;
            }
        }
        temp1=temp2;
        temp2=num;
        
    }
    printf("%d",ctr);

    return 0;
}