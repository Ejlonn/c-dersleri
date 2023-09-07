#include <stdio.h>


int factcalculator(int sayi){
	
	int sum = 1;
	
	for(;sayi > 0; sayi--){
		
		sum *= sayi;
				
	}
	
	return sum;
	
}





int main(){
	
	int num;
	printf("Faktoriyelini istediginiz sayiyi giriniz: ");
	scanf("%d",&num);
		
	printf("Faktoriyel :%d",factcalculator(num));
		
	return 0;
}
