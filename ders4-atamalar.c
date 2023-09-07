#include <stdio.h>


int main (){
	
	/*  Atamalar, Arttýrma ve azaltma iþlemleri
			
			deðiþken(variable) = ifade (expression)
			int x = 15;
			int y = 14;
			
			x = y;
			y = x;
			Örnek;
			int x = 6;
			int y = 7;
			x = y; (önce y nin yani sað tarafýn deðeri hesaplanýr sonra soldaki deðere atýlýr. y=7 x=7)
			y = x+1 (x+1 hesaplanýyor (8) ve y ye atýlýyor. y=8 x=7)
			
			x = x+1;
			Atama durumunda once x+1 hesaplanýyor sonra sola atýlýyor.
			
			Arttýrma ve Azaltma iþlemleri
		
		i = i+1
		Bunun eþiti ayný zamanda i +=1  (i = i+1 ile ayný þey)
		(deðiþken iþlem=ifade)
		
		C de daha kolayý var
		üstteki iþlem i yi 1 arttýrýyor
		i yi arttýrmak için C de i++ ve ++i gibi þeyler var
		postfix: i++;
		prefix: ++i;
		Arasýndaki fark
		
		int i =4;
		printf("%d",i++);
		ekrana 4 bastýrýr çünkü bu post fix halinde (i++) i nin arttýrýlmadan oncekini yazar yazdýrdýktan sonra 1 arttýrýr(sonraki satýrda yani)
		printf("%d),++i);
		ekrana 5 bastýrýr cunku bu prefix halinde (++i) i nin artmýþ halini bastýrýr bir sonraki satýrda arttýrýr
		
		i-- ve --i ayný þekilde çalýþýyor
		
		(deðiþken iþlem=ifade) yi biraz açarsak
		
		i = i % a;
		
		Bu forma sokmaya çalýþýrsak i %= a;
		
		örnek: i = i * (a+1);    forma sokarsak i *= a+1;
		
		
		
				Ýç içe atamalar:
				
		i = j = k = 0;
		Bu þekilde atamada saðdan baþlayarak önce k yý 0 yapýyor. Sonra j yi k nýn deðeri yapýyor yani j = k yani j = 0. Sonra i ye j nin deðerini atýyor yani i = 0
		oldu Sonuç olarak saðdan yapýlan atamalar sonucu
		i = 0;
		j = 0;
		k = 0;
		Bu atamalarda hep saðdan baþlanýr
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
	
	x += a+1;   /// bu x = x + (a+1); e eþit bende x=3 oldu a=7 idi toplam 3 + 8 den sonuç 11
	printf("x:%d\n",x);
	
	
	x = y = a+4;
	
	printf("%d %d %d\n", x,y,a);


	return 0;
}
