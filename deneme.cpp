#include <stdio.h>


int main(){
	
	int toplam = 0;
	int i;
	
	for (i=0;i<=10;i++){
		if(i % 2 == 1){
		toplam +=i;
		}
		
		if (i % 2 == 0){
		continue;
		}
		
	}
	printf("%d",toplam);
		
		
		
	return 0;	
	}
	
	
	
	
	
	
	
	

