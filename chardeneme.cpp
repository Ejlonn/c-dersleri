#include <stdio.h>
#include <string.h>

int len(char uzunluk[]){
	
	int sum=0;
	int i;
	for (i=0;uzunluk[i]!='\0';i++){
		
		
		sum++;
	}
	
	return sum;	
}
//yukar�daki fonksiyonun k�sas� <string.h> k�t�phanesinde strlen(isim).

int main(){
	
	char isim[25];
	printf("Kac harfli oldugunu ogrenmek istediginiz ismi girin: ");
	scanf("%s",&isim);
	printf("Isminiz %d harflidir",len(isim));	
	return 0;
}
