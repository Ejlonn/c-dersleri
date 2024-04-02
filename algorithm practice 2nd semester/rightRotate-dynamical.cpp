#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void rightRotateShift(char *array, int shift) {
    
	int len = strlen(array);
    array = (char*)realloc(array, (len + shift + 1) * sizeof(char));
	
	for (int i = 0; i < shift; i++) {
        char temp = (array)[len - 1];
        for (int j = len - 1; j > 0; j--) {
            (array)[j] = (array)[j - 1];
        }
        (array)[0] = temp;
    }
}


int main() {
    
	
	int currSize = 10, size = 0;
	
	char *array = (char *)malloc(currSize * sizeof(char));
	
    if (array == NULL) {
        printf("Bellek tahsisi basarisiz!\n");
        return 1;
    }

    printf("Metin giriniz: ");
    
 	char letter;   
   
    while((letter = getchar()) != '\n')
    {
    	if(size >= currSize - 1 )
    	{
    		currSize *= 2;
    		array = (char*)realloc(array,currSize * sizeof(char));
		}
		array[size++] = letter;
	} 
    array[size] = '\0';
    
    int shift;
    printf("Right rotate shift miktarýný giriniz: ");
    scanf("%d", &shift);

    if (shift > strlen(array)) {
        
        shift %= strlen(array);
        return 0;
    }

    rightRotateShift(array, shift);

    printf("%s\n", array);

    free(array); // Belleði serbest býrak

    return 0;
}

