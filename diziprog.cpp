#include <stdio.h>


//// kullan�c�dan 5 girdi al�caz, bu girdileri arrayde toplay�p bu say�lar�n aritmetik ortalamas�n� alicaz



int main(){
	
	float toplam= 0.0;
	float dizi[5];
	int i;
	
	for(i=0; i<5;i++){
		
		printf("Bir sayi giriniz: ");
		scanf("%f",&dizi[i]);
}

	for(i=0;i<5;i++){
		toplam+=dizi[i];
	}
	printf("Girdiginiz sayilarin aritmetik ortalamasi %.2f'dir",toplam/5);
	
	
	return 0;
}
