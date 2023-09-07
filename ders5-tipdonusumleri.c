#include <stdio.h>


int main (){
	
	
	/* Tip dönüşümleri
	   Otomatik dönüşümler
	   Örneğin bi ifadede tüm veri tipleri aynı değil. Mesela 3.2 / 2 yaptıgımızda float ve int verileri aynı ifadede oluyor
	   böyle oldugu zaman sonuç 1.6 olacaktır çünkü burda 2 otomatik olara 2.0 a yani float bi değere dönüşüyor (2 int bi ifade 2.0 float)
	   
	   Otomatik dönüşüm çizelgesi
	   char
	   short ------> int ----------> float --------> double -----------> long double
	   
	   Mesela int ve double aynı ifadedeyse her veri double ' a otomatik çevrilir (sağa doğru öncelik artar)
	   
	   
	   			Manuel Dönüşümler
		Otomatik dönüşümlerin olmadığı yerde kendimiz yapabilirz.
		3.2 sayısını int yapmak istersek ------> (int) 3.2 ------> 3 sonucunu verir (kesirli kısmı atar)
		
		*/
		
	int x= 3;
	float y= 0.1;
	printf("%f\n",x/y);

	return 0;
}
