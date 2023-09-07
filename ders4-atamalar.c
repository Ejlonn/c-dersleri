#include <stdio.h>


int main (){
	
	/*  Atamalar, Artt�rma ve azaltma i�lemleri
			
			de�i�ken(variable) = ifade (expression)
			int x = 15;
			int y = 14;
			
			x = y;
			y = x;
			�rnek;
			int x = 6;
			int y = 7;
			x = y; (�nce y nin yani sa� taraf�n de�eri hesaplan�r sonra soldaki de�ere at�l�r. y=7 x=7)
			y = x+1 (x+1 hesaplan�yor (8) ve y ye at�l�yor. y=8 x=7)
			
			x = x+1;
			Atama durumunda once x+1 hesaplan�yor sonra sola at�l�yor.
			
			Artt�rma ve Azaltma i�lemleri
		
		i = i+1
		Bunun e�iti ayn� zamanda i +=1  (i = i+1 ile ayn� �ey)
		(de�i�ken i�lem=ifade)
		
		C de daha kolay� var
		�stteki i�lem i yi 1 artt�r�yor
		i yi artt�rmak i�in C de i++ ve ++i gibi �eyler var
		postfix: i++;
		prefix: ++i;
		Aras�ndaki fark
		
		int i =4;
		printf("%d",i++);
		ekrana 4 bast�r�r ��nk� bu post fix halinde (i++) i nin artt�r�lmadan oncekini yazar yazd�rd�ktan sonra 1 artt�r�r(sonraki sat�rda yani)
		printf("%d),++i);
		ekrana 5 bast�r�r cunku bu prefix halinde (++i) i nin artm�� halini bast�r�r bir sonraki sat�rda artt�r�r
		
		i-- ve --i ayn� �ekilde �al���yor
		
		(de�i�ken i�lem=ifade) yi biraz a�arsak
		
		i = i % a;
		
		Bu forma sokmaya �al���rsak i %= a;
		
		�rnek: i = i * (a+1);    forma sokarsak i *= a+1;
		
		
		
				�� i�e atamalar:
				
		i = j = k = 0;
		Bu �ekilde atamada sa�dan ba�layarak �nce k y� 0 yap�yor. Sonra j yi k n�n de�eri yap�yor yani j = k yani j = 0. Sonra i ye j nin de�erini at�yor yani i = 0
		oldu Sonu� olarak sa�dan yap�lan atamalar sonucu
		i = 0;
		j = 0;
		k = 0;
		Bu atamalarda hep sa�dan ba�lan�r
		*/
		
	int x = 5;
	int y = 7;
	int a = 2;
		
	x = y;
	y = x +a +1;
		
	printf("x:%d\ny:%d\na:%d\n",x ,y ,a);
		
	x =4;
	y =5;
	a =6;
		
	printf("x:%d y:%d a:%d\n",--x,++y,a++);
	printf("x:%d y:%d a:%d\n", x,y,a);
	
	x += a+1;   /// bu x = x + (a+1); e e�it bende x=3 oldu a=7 idi toplam 3 + 8 den sonu� 11
	printf("x:%d\n",x);
	
	
	x = y = a+4;
	
	printf("%d %d %d\n", x,y,a);


	return 0;
}
