#include <stdio.h>



int main(){
	
	
	int num;
	printf("Sayi gir: ");
	scanf("%d",&num);
	
	int binary[40];
	int index = 0;
	while (num>0)
	{
		binary[index++] = num%2;
		num/=2;
		
	}
	printf("Binary: ");
	for (int i = index - 1;i >= 0 ;i--)
	{
		printf("%d",binary[i]);
		if(i % 8 == 0)
		{
			printf(" ");
		}
	}
	
	
	
	return 0;
}
