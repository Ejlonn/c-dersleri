#include <stdio.h>

int main(){
	
	int n;
	printf("bir sayi giriniz:\n");
	scanf("%d",&n);
	int fact =1;

	while(n !=0){
		printf("%d\n",n);
		fact= fact * n;
		
		n--;
		
		
		
		
		
		
	}
	
	printf("%d",fact);
	
	
	
	return 0;
}
