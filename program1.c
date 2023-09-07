#include <stdio.h>

int main(){
	
	int a,b,c,d,e;
	float aritmetikort;
	
	
	printf("5 Tane sayi giriniz:\n");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	aritmetikort = (a+b+c+d+e)/((5.0));
	printf("Girdiginiz sayilarin aritmetik ortalamasi %f 'dir.'" ,aritmetikort);
	
	
	return 0;
}
