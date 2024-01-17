#include <stdio.h>

char repeatingChars(char array[]){
	
	char mostRepeated;
	int ctrTemp = 0;
	int ctr;
	
	for(int i =0;array[i]!= '\0';i++)
	{
		ctr = 0;
		for (int j = 0;array[j]!='\0';j++)
		{
			if(array[i]==array[j])
			{
				ctr++;
			}
			if(ctr>ctrTemp)
			{
				mostRepeated = array[j];
				ctrTemp = ctr;
			}
			
		}
		
	}
	
	return mostRepeated;
}

int howManyChars(char array[],char targetChar){
	int ctr = 0;
	for(int i = 0; array[i] != '\0';i++)
	{
		if(array[i] == targetChar)
		{
			ctr++;
		}
	}
	
	
	return ctr;	
}

int main(){
	
	char array[200];
	printf("Bir metin giriniz: ");
	gets(array);
	char mostRepeated = repeatingChars(array);
	int howMany = howManyChars(array,mostRepeated);
	
	printf("En cok tekrar eden karakter '%c'dir.Toplamda %d defa tekrar etmektedir",mostRepeated,howMany);
	

	
	return 0;
}
