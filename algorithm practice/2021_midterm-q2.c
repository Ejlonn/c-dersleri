#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int arrA[50],arrB[50],arrC[50];
    int randNum;

    int i;
    for(i=0;i<50;i++)
    {
        arrA[i] = rand() % 100;
        arrB[i] = rand() % 100;
    }

    printf("A dizisi: ");
    for(i=0;i<50;i++)
    {
        printf("%d ",arrA[i]);
    }
    
    printf("\nB dizisi: ");
    for(i=0;i<50;i++)
    {
        printf("%d ",arrB[i]);
    }

    for(i=0;i<50;i++)
    {
        randNum = rand()%10;
        printf("\n%d. dongudeki rastgele sayi: %d",i+1,randNum);
        
        if(randNum >=5)
        {
            arrC[i] = arrA[i];
        }
        else if(randNum<5)
        {
            arrC[i] = arrB[i];
        }
    }
    
    printf("\nRastgele sayiya bagli olusturulmus dizi: ");
    for(i=0;i<50;i++)
    {
        printf("%d ",arrC[i]);
    }

    return 0;
}