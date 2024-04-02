#include <stdio.h>

int printPrime(int x){
	
	if(x<2) return 0;
	
	int i = 2;
	
	for(i; i*i <= x;i++)
	{
		if(x % i == 0) return printPrime(x-1);
	}
	
	printf("%d ",x);
	return printPrime(x-1);
}

int main(){
	
	int num;
	scanf("%d",&num);
	printPrime(num);	
	
	
	return 0;
}
