#include <stdio.h>

int main(){
	
	int vize1,vize2,final;
	float ortalama;
	float bolumort;
	
	printf("Ilk vize notunuzu giriniz:");
	scanf("%d",&vize1);
	printf("Ikinci vize notunuzu giriniz:");
	scanf("%d",&vize2);
	printf("Final notunuzu giriniz:");
	scanf("%d",&final);
	printf("Bolum ortalamanizi giriniz:");
	scanf("%f",&bolumort);
	
	ortalama = (vize1+vize2+final)/(3.0);
	
	if (ortalama > 60){
		
		printf("Dersi gectiniz.");
		if (ortalama < 90 && bolumort < 2.5)
		printf("Bolum ortalamaniz dusuk oldugu icin dersi tekrar almanizi oneririz.");
	}	
	
	else if (ortalama <60 && ortalama>50){
		
		printf("Dersten bute kaldiniz.");
		
		if (bolumort > 2.5);
		printf("Butu gecseniz bile dersi tekrar almalisiniz, Cunku bolum ortalamaniz dusuk.");
	}
	
	else
		printf("Dersten Kaldiniz.");
		
	
}
