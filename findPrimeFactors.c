#include <stdio.h>
#include <stdlib.h>

//findPrimeFactors, asal �arpanlar� bul fonksiyonu pointer to integer fonksiyon. Integer fonksiyonlar sadece bir de�er d�nd�r�r(4 byte)
//ama biz bir dinamik memory verdi�imiz 50*4 bytel�k bir asal �arpanlar integer dizisi d�nd�rmek istiyoruz.  
//bunu ancak pointer to integer fonksiyonla ba�arabiliriz.

int* findPrimeFactors(int num,int *factorNums) //*factorNums  call by referance.
{
	int* primeFactors = malloc(50 * sizeof(int)); // ��kacak asal �arpan say�s�n� bilmedi�imiz i�in dinamik memory veriyoruz
	int factorNumsTemp = 0; // ge�ici olarak �arpan say�s�n� 0 at�yoruz.
	int i; // d�ng� de�i�keni. C99 ve �st� s�r�mlerde for d�ng�s� i�inde integer tan�mlayabiliriz.
	
	//burdan sonraki i�lem bir d�ng�de main fonksiyondan g�nderdi�imiz say�n�n(kullan�c�dan al�yoruz)
	//2 den ba�layarak tam b�leni say� varsa bunu primefactors pointer dizisine kaydediyoruz
	//burda at�yorum 6 ya b�l�nm�yor mu neden kontrol etmiyo derseniz zaten once 2 ve 3� kontrol edece�i i�in bu �ekilde hep
	//asal say�lar� listeye atacakt�r. En son say� 1 oldugunda d�ng�den ��k�cak ve factorNumsTemp de�i�keni ka� tane
	//�arpan oldugunu akip edecek. E�er s�f�rsa say�n�n asal b�leni yoktur(1) ve fonksiyonun �a�r�ld��� yere NULL d�nd�r�cek.
	
	
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












