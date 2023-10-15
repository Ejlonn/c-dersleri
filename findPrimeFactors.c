#include <stdio.h>
#include <stdlib.h>

//findPrimeFactors, asal çarpanlarý bul fonksiyonu pointer to integer fonksiyon. Integer fonksiyonlar sadece bir deðer döndürür(4 byte)
//ama biz bir dinamik memory verdiðimiz 50*4 bytelýk bir asal çarpanlar integer dizisi döndürmek istiyoruz.  
//bunu ancak pointer to integer fonksiyonla baþarabiliriz.

int* findPrimeFactors(int num,int *factorNums) //*factorNums  call by referance.
{
	int* primeFactors = malloc(50 * sizeof(int)); // çýkacak asal çarpan sayýsýný bilmediðimiz için dinamik memory veriyoruz
	int factorNumsTemp = 0; // geçici olarak çarpan sayýsýný 0 atýyoruz.
	int i; // döngü deðiþkeni. C99 ve üstü sürümlerde for döngüsü içinde integer tanýmlayabiliriz.
	
	//burdan sonraki iþlem bir döngüde main fonksiyondan gönderdiðimiz sayýnýn(kullanýcýdan alýyoruz)
	//2 den baþlayarak tam böleni sayý varsa bunu primefactors pointer dizisine kaydediyoruz
	//burda atýyorum 6 ya bölünmüyor mu neden kontrol etmiyo derseniz zaten once 2 ve 3ü kontrol edeceði için bu þekilde hep
	//asal sayýlarý listeye atacaktýr. En son sayý 1 oldugunda döngüden çýkýcak ve factorNumsTemp deðiþkeni kaç tane
	//çarpan oldugunu akip edecek. Eðer sýfýrsa sayýnýn asal böleni yoktur(1) ve fonksiyonun çaðrýldýðý yere NULL döndürücek.
	
	
	for (i=2; i<=num; i++)
	{
		while(num % i == 0)
		{
			primeFactors[factorNumsTemp] = i;
			factorNumsTemp++;
			num /= i;
		}
	}
	*factorNums = factorNumsTemp;
	
		if(factorNumsTemp == 0)
		{
			free(primeFactors);
			return NULL;
		}
	return primeFactors;
}


int main(){
	
	int num;
	int factorNums;
	int i;
	printf("Asal carpanlarini bulmak istediginiz sayiyi giriniz: ");
	scanf("%d",&num);

	int* primeFactors = findPrimeFactors(num,&factorNums);
	
	if(primeFactors == NULL)
	{
		printf("\n%d sayisinin asal carpanlari bulunamadi!",num);	
	}
	else
	{
		printf("%d sayisinin asal carpanlari: ",num);
		for(i=0; i < factorNums; i++)
		{
			printf("%d ", primeFactors[i]);	
		}
		printf("\n");
		free(primeFactors);
	}
	
	return 0;
}












