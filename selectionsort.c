#include <stdio.h>

void selectionsort(int array[],int size){

    int i,j;
    int mindex; // minimum index
    
    for (i=0 ; i < size-1; i++){
        mindex= i;
        for(j = i+1; j < size; j++){
        if (array[j]<array[mindex]){
        mindex= j;
        }
        }
    int temp = array[i];
    array[i]=array[mindex];
    array[mindex] = temp;   

    }   
    
}
int main(){

    int array[] = {9,8,5,1,7,6,4,2,3};
    int size = 10;
    int i;
    selectionsort(array,size);
    for (i=0 ; i<size ;i++){
        printf("a[%d]= %d\n",i,array[i]);
    }

    return 0;
}