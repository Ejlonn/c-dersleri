#include <stdio.h>
#include <stdlib.h>


int main(){

	int *array = NULL, *temp = NULL;
	int currSize = 10, size = 0;
	
	array= (int*)calloc(currSize, sizeof(int));
	if(array == NULL)
	{
		printf("Bellek ayirma hatasi!");
		return 0;
	}
	
	int num;
	
	printf("Sayi giriniz, cikmak icin negatif sayi giriniz.\n");
	while(1)
	{
		printf("Sayi giriniz: ");
		scanf("%d",&num);
		if (num<0) break;
		int control;
		
		if((num & (1<<5-1)) == 0) control = 0;
		else control = 1;
		
		if (control == 0) num = num >> 1;
		else num = num << 1;
		
		if(size >= currSize)
		{
			currSize *= 2;
			temp = (int*)realloc(array, currSize * sizeof(int));
			if(temp == NULL)
			{
				printf("Bellek yeniden tahsisi hatasý!");
				free(array);
				return 0;
			}
			array = temp;
		}
		*(array+size) = num;
		size++;
		
	}
	
	int i;
	for(i = 0;i<size;i++){
		printf("%d ",*(array+i));
	}
	
	free(array);
	
	return 0;
}
