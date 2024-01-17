#include <stdio.h>

int main(){
	
	
	char array[25];
	char newArr[25];
	
	printf("Enter an array of 24 letters: ");
	fgets(array,sizeof(array),stdin);
	
	char del;
	printf("Enter a letter that you want to delete from an array: ");
	scanf("%c",&del);
	
	int j = 0;
	
	for(int i = 0;array[i] != '\0' ;i++)
	{
		if(array[i] != del)
		{
			newArr[j++] = array[i];
		}
		
	}	
	newArr[j] = '\0';
	
	
	printf("New array: %s",newArr);
	
	return 0;
}
