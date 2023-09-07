#include <stdio.h>




int main (){

	/*     x+y, x+y*z , (x/y) *y , (a%b) - (x*a +1)  bunlar aritmetik ifadeler
	
	iþlem sýrasý;
	
	Tekli operatörler : (+) (-) (-x, +x) 1. öncelik kendi aralarýnda saðdan sola
	Ýkili operatörler : * , / , % 2. öncelik kendi aralarýnda soldan saða
	ikili operatörler : +,- 3. öncelik kendi aralarýnda soldan saða
	
	parantez içleri hep ilk yapýlýr
	*/
	
	printf("%d\n", -3+4*1);
	printf("%d\n", -3+ 4%3);
	printf("%d\n", -3+4/1);
	printf("%d\n", -3-4*1);
	
	return 0;
}
