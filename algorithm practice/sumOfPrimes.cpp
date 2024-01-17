#include <stdio.h>

int sumOfPrimes(int num1,int num2);
int isPrime(int num);


int main(){
	
	
	int num1, num2,lowest,largest;
	
	printf("Ilk sayiyi giriniz: ");
	scanf("%d",&num1);
	
	printf("Ikinci sayiyi giriniz: ");
	scanf("%d",&num2);
	
	printf("Iki sayi arasinda kalan asallarin toplami: %d",sumOfPrimes(num1,num2));
		
	return 0;
}

int sumOfPrimes(int lowest, int largest){
	
	int sum = 0;
	int i;
	if(lowest > largest)
	{
		int temp = lowest;
		lowest = largest;
		largest = temp;
	}
	
	for(i=lowest; i<largest;i++)
	{
		if(isPrime(i))
		{
			sum+=i;
		}
	}
	return sum;
}

int isPrime(int num){
	if(num<2)
	{
		return 0;
	}
	
	int i;
	for(i = 2; i*i<= num; i++)
	{
		if (num % i == 0)
		{
			return 0;
		}
	}
	return 1;	
	
}
