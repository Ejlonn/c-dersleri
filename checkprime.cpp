#include <stdio.h>



int checkprime(int sayi){
	
	int i;
	for(i=2; i<sayi;i++){
		if (sayi % i == 0){
		
		return 0;
		}
	else if(sayi%i==1){
		return 1;
	}
			
	}
		
}

int main(){
	int sayi;
	printf("Asal olup olmadigini sorgulamak istediginiz sayiyi giriniz: ");
	scanf("%d",&sayi);
	if (checkprime == 0){
		printf("Bu sayi asal degildir.");
	}
	else{
		printf("Bu sayi asaldir.");
	}
	
	return 0;
}
