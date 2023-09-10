#include <stdio.h>


void insertionsort(int arr[],int size);


int main(){

    int arr[] = {1,5,2,8,4,9,6,7,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Size of array is : %d\n",size);

    insertionsort(arr,size);
    int i;
    for (i = 0; i < size; i++){
        printf("arr[%d]: %d\n",i+1,arr[i]);
    }




}
void insertionsort(int arr[],int size){

    int i;
    for (i=1; i<size ; i++){
        int key = arr[i]; ///// hangi elemanda oldugumuzu takip etmek amaçlı.
        int j= i-1;
        while (j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }


}