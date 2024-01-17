#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float avgOfArray(int array[]){
	int sum = 0;
	
	for(int i = 0;i<50;i++)
	{
		sum+= array[i];
	}
	float avg = sum / 50.0;
	return avg;
}

int main(){
	
	srand(time(NULL));
	
	int array[50];
	
	for(int i = 0;i<50;i++)
	{
		array[i] = rand()%10;
	}
	printf("Rand array: ");
	for(int i = 0;i<50;i++)
	{
		printf("%d ",array[i]);	
	}	
	
	float avg = avgOfArray(array);
	printf("\nOrtalama: %lf\n",avg);
	
	printf("Ortalamanin altinda kalan sayilar: ");
	for(int i = 0;i<50;i++)
	{
		if (array[i]<avg)
		{
			printf("%d ",array[i]);
		}
	}

	printf("\nOrtalamanin ustunde kalan sayilar: ");
	for(int i = 0;i<50;i++)
	{
		if (array[i]>avg)
		{
			printf("%d ",array[i]);
		}
	}
	
	return 0;
}
