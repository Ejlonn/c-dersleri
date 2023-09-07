#include <stdio.h>
#include <stdbool.h>
int main(){
	
	int toplam =0;
	int i;
	int sayi;
	
	for (i=0; true;i++){
		
		printf("Sayiyi giriniz: (Cikmak icin -1 basiniz.)");
		scanf("%d",&sayi);
		if(sayi == -1){
			
		break;
		
		}
		else if (toplam += sayi){
			
			printf("%d\n",toplam);
		}



	}

	
	return 0;
}
