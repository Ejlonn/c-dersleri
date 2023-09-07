#include <stdio.h>
#include <stdlib.h>

/* fibonacci serisi 0 1 1 2 3 5 8 13 21 ....    bir a1 var, bir a2 var bi a3var, i döngü deðiþkenim var ve kullanýcýnýn gireceði max deðerim var bu da num olsun
fibonacci serisi sürekli bi öncekiyle toplayarak diðer deðeri elde eder yani

a1 
a2
    bu ikisini printledik, yani döngü deðiþkenimizi 3. deðerden baþlatýcaz.


a3= a1+a2;
burda for döngüsü içinde
	
 		for(i=3; i<num;i++){
		 
		 	a3=a1+a2;
			 printf("%d\n",a3);
			 a1= a2;
			 a2=a3 ;
		}
	böyle olunca
	
	a3üm artýk 0+1 den 1 oldu
	1 printlendi 3.terimim
	a1 yani 0ý a2ye eþitledim artýk a1 = 1 oldu
	a2 yi de printlenen a3e yani 1 e eþitledim 
	bir sonraki döngüce a3 1+1 yani a1+a2 toplamýndan 2 olucak ve döngü devam edicek.
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
	

