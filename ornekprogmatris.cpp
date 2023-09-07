#include <stdio.h>

/// 15 tane sayý istiyor 3e5lik bir matris oluþturucaz sütünlardaki sayýlarýn toplamýný bul = ={{3,5,1,3,2},{4,4,4,5,5},{9,8,9,7,7}};


int main(){
	int toplam = 0;
	int matris[3][5];
	int i,j;
	
	for (i=0;i<3;i++){
		
		for(j=0;j<5;j++){
			
			scanf("%d",&matris[i][j]);
						
		}				
	}
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			printf("%d ",matris[i][j]);
			
		}
		printf("\n");
		
	}

	for (j=0;j<5;j++){
		for(i=0;i<3;i++){
			
			toplam += matris[i][j];
		}
	printf("\nsutun %d: %d",j,toplam);
	toplam = 0;
	}
	
	return 0;
}
