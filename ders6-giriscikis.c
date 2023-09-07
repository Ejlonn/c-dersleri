/* Giriþ Çýkýþ fonksiyonlarý
	printf ve scanf
	
	float bir deðer olan x'i ekrana yazdýrmak için printf("%f",x); yapýyoruz. Benzer bi þekilde float olan bir x tanýmlayýp
	daha sonra bu deðeri bir kullanýcýdan almak istersek de scanf("%f",&x); yapýyoruz "&" iþareti x'e kullanýcýdan gelen deðeri
	atadýðýný gösteriyor. Diðer format belirleyicileri printf ile aynýdýr.
	
	*/


#include <stdio.h>   /// standart input output kütüphanesi (printf, scanf)
#define PI 3.14


int main(){
	
	int yaricap;
	float hacim;
	
	printf("Kurenin yaricapini giriniz:");
	scanf("%d",&yaricap);
	
	hacim = (4/3.0)*PI*(yaricap*yaricap*yaricap);
	printf("Kurenin hacmi %.2f 'dir",hacim);
	
		
	
	return 0;
}
