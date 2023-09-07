#include <stdio.h>




int main(){
	int max;
	printf("Kupler toplamini bulmak istediginiz max sayiyi giriniz:");
	scanf("%d",&max);
	int i = 0;
	int sum = 0;
		for (i=0; i<max; i++){
		
		sum += i*i*i;
		
		
		
		}
	printf("%d",sum);	

	return 0;
}
