#include <stdio.h>


int main (){
	
	
	/* Tip d�n���mleri
	   Otomatik d�n���mler
	   �rne�in bi ifadede t�m veri tipleri ayn� de�il. Mesela 3.2 / 2 yapt�g�m�zda float ve int verileri ayn� ifadede oluyor
	   b�yle oldugu zaman sonu� 1.6 olacakt�r ��nk� burda 2 otomatik olara 2.0 a yani float bi de�ere d�n���yor (2 int bi ifade 2.0 float)
	   
	   Otomatik d�n���m �izelgesi
	   char
	   short ------> int ----------> float --------> double -----------> long double
	   
	   Mesela int ve double ayn� ifadedeyse her veri double ' a otomatik �evrilir (sa�a do�ru �ncelik artar)
	   
	   
	   			Manuel D�n���mler
		Otomatik d�n���mlerin olmad��� yerde kendimiz yapabilirz.
		3.2 say�s�n� int yapmak istersek ------> (int) 3.2 ------> 3 sonucunu verir (kesirli k�sm� atar)
		
		*/
		
	int x= 3;
	float y= 0.1;
	printf("%f\n",x/y);

	return 0;
}
