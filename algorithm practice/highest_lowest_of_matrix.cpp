#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
	
	srand(time(NULL));
	
	int matris[5][5];
	int lowest,highest;
	int lowestRow,lowestColumn,highestRow,highestColumn;
	
	for(int i = 0;i<5;i++)
	{
		for(int j = 0;j<5;j++)
		{
			matris[i][j] = rand()%100;// normalde 5e5liði kullanýcý girecek uðraþmamak için böyle yaptým bunu kullanmak istemiyosanýz 'scanf("%d",&matris[i][j];' ile degistirin
		}
	}
	printf("\nRastgele Matris: \n");
	for(int i = 0; i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			printf("%d ",matris[i][j]);
		}
		printf("\n");
	}
	lowest = matris[0][0];
	highest = matris[0][0];

	highestRow = 0;
	highestColumn = 0;
	lowestRow = 0;
	lowestColumn = 0;
	
	
	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 4;j++)
		{
			if(matris[i][j] > highest)
			{
				highest = matris[i][j];
				highestRow = i+1;
				highestColumn = j+1;
			}
			else if(matris[i][j] < lowest)
			{
				lowest = matris[i][j];
				lowestRow = i+1;
				lowestColumn = j+1;
			}
			
		}
	}

	printf("\nMatristeki en yuksek: %d matriste %d. Satir, %d. Sutundadir.",highest,highestRow,highestColumn);
	printf("\nMatristeki en dusuk: %d matriste %d. Satir, %d. Sutundadir.",lowest,lowestRow,lowestColumn);


	return 0;
}
