#include <stdio.h>




int main (){

	/*     x+y, x+y*z , (x/y) *y , (a%b) - (x*a +1)  bunlar aritmetik ifadeler
	
	i�lem s�ras�;
	
	Tekli operat�rler : (+) (-) (-x, +x) 1. �ncelik kendi aralar�nda sa�dan sola
	�kili operat�rler : * , / , % 2. �ncelik kendi aralar�nda soldan sa�a
	ikili operat�rler : +,- 3. �ncelik kendi aralar�nda soldan sa�a
	
	parantez i�leri hep ilk yap�l�r
	*/
	
	printf("%d\n", -3+4*1);
	printf("%d\n", -3+ 4%3);
	printf("%d\n", -3+4/1);
	printf("%d\n", -3-4*1);
	
	return 0;
}
