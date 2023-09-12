#include <stdio.h>


int main(){

    FILE *filep = fopen("deneme.txt","r"); // fopen("dosya_adi","mod"); FILE dosya değişkeni ve pointer ile kullanılmak zorunda
    int buffer;
    int lines = 0;
    int numbers[100];
   
   /* if (filep == NULL){
        printf("Dosya Bulunamadı");
    }
    else{
        while (fscanf(filep,"%d",&buffer) != EOF)
        {
            numbers[lines] = buffer;
            printf("%d",buffer); 
            lines++ ;   
        }
        
    }*/
  
    fclose(filep);

    return 0;
}