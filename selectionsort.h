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