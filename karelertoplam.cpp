#include <stdio.h>
#include <math.h>


int main(){
	
	int x,y;
	int karelertoplam;
	
	printf("Kareleri toplamini bulmak istediginiz ilk sayiyi giriniz:");
	scanf("%d",&x);
	printf("Ikinci sayiyi giriniz:");
	scanf("%d",&y);

	karelertoplam = (x*x)+(y*y);
	
	printf("Girdiginiz sayilarin kareler toplami %d 'dir",karelertoplam);	
	
	
	
	return 0;

}
