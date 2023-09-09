#include <stdio.h>
#include "bubblesort.c" ///ilk header file library denemesi

int max(int *a,int len);

int main(){
 
    int array[5] = {4,1,55,100,7};
    int maks = max(array,5);
    printf("Sayilar dizisinin en buyuk elemani %d' dir.\n",maks);
    bubblesort(array,5);
    int i;
    for (i=0; i<5;i++){
        printf("i:%d \n",array[i]);


    }
 /*
    printf("%d\n",*(p));    //   *(p+1) >>>>>>>>>>>>>>> ile p[1] in hiç bir farkı yok.
    printf("%d\n",*(p+1));
    printf("%d\n",*(p+2));
    printf("%d\n",*(p+3));
    printf("%d\n",*(p+4));
   
   
    printf("%d\n",p[0]);
    printf("%d\n",p[1]);
    printf("%d\n",p[2]);
    printf("%d\n",p[3]);
    printf("%d\n",p[4]);
    return 0;
*/

}

int max(int *a,int len){

    int maks = *a;
    int i;

    for(i=1; i < len ; i++){
        if(a[i] > maks){

            maks= a[i];
        }

    
    }
    return maks;
}