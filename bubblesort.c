//// bubble sort   

#include <stdio.h>
void bubblesort(int array[],int size);
void printarray(int array[],int size);

int main(){
	
	int size;
	printf("Dizinin uzunlugunu girin: ");
	scanf("%d",&size);
	
	
	int array[size];
	int i;
	
	
	for (i=0;i < size;i++){
		
		printf("Dizinin %d. Elemanini girin: ",i+1);
		scanf("%d",&array[i]);	
	}	
	bubblesort(array,size);
	printarray(array,size);
	
	
	return 0;
}

void bubblesort(int array[],int size){
	
	int temp;
	int i,j;	
	for(i=0;i < size-1; i++){
		
		for(j=0;j<size-1-i;j++){
		
		
			if(array[j]>array[j+1]){
			
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
				
		}
		}
	}	
	
}
void printarray(int array[],int size){
	
	int i;
	for (i=0; i < size;i++){
		printf("%d ",array[i]);
	}
	
}
