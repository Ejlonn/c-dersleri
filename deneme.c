#include <stdio.h>


int fonksiyon(int *b,int len){
	
	int sum=0;int i;
	for (i=0;i < len;i++){
		sum +=b[i];
		return sum;
		
	}
	
	
}


int main(){
	
	int dizi[] ={1,2,3,4};
	int len = sizeof(dizi)/sizeof(dizi[0]);
	printf("%d",fonksiyon(dizi,len));
	return 0;
}
