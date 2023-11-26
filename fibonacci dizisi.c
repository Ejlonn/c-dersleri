#include <stdio.h>
#include <stdlib.h>

/* fibonacci serisi 0 1 1 2 3 5 8 13 21 ....    bir a1 var, bir a2 var bi a3var, i d�ng� de�i�kenim var ve kullan�c�n�n girece�i max de�erim var bu da num olsun
fibonacci serisi s�rekli bi �ncekiyle toplayarak di�er de�eri elde eder yani

a1 
a2
    bu ikisini printledik, yani d�ng� de�i�kenimizi 3. de�erden ba�lat�caz.


a3= a1+a2;
burda for d�ng�s� i�inde
	
 		for(i=3; i<num;i++){
		 
		 	a3=a1+a2;
			 printf("%d\n",a3);
			 a1= a2;
			 a2=a3 ;
		}
	b�yle olunca
	
	a3�m art�k 0+1 den 1 oldu
	1 printlendi 3.terimim
	a1 yani 0� a2ye e�itledim art�k a1 = 1 oldu
	a2 yi de printlenen a3e yani 1 e e�itledim 
	bir sonraki d�ng�ce a3 1+1 yani a1+a2 toplam�ndan 2 olucak ve d�ng� devam edicek.
*/
int main(){
	
	int a1 = 0, a2= 1, a3,i,num;
	printf("Kac terimli fibonacci dizisi istersiniz?:");
	scanf("%d",&num);	
	printf("%d\n%d\n",a1,a2);
	
	for (i=3;i<=num;i++){	
	
		a3=a1+a2;
		printf("%d\n",a3);
		a1=a2;
		a2=a3;	
	
		}		
	return 0;
}
	

