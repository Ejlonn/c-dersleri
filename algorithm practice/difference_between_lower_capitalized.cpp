#include <stdio.h>

int isCapitalized(char ch){
	
		if(ch >= 'a' && ch <= 'z')
		{
			return 1;
		}
		else if (ch >='A'&& ch <='Z')
		{
			return 0;
		}
		
}

int main(){
	
	char array[200];
	printf("Bir metin giriniz: ");
	gets(array);
	int ctrLower = 0;
	int ctrCapitalized = 0;
	
	for(int i = 0;array[i]!='\0';i++)
	{
		if(isCapitalized(array[i]) == 1)
		{
			ctrCapitalized ++;
		}
		else if(isCapitalized(array[i]) == 0)
		{
			ctrLower++;
		}
	}
	
	
	printf("Buyuk harf ve kucuk harf arasindaki fark |%d| 'dir", ctrCapitalized - ctrLower);
	

	
	return 0;
}
