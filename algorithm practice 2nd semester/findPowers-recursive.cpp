#include <stdio.h>

int result = 1;

double power(int num1, int num2){
	
	
	result *= num1;	
	static int i;
	i++;
	if(i==num2){
		return result;
	}

	power(num1,num2);
}

void asrin(int border,int num){
	
	int i =1;
	int control=power(num,i);
	while(control<border){
		printf("%ld ",control);
		i++;
		control = power(num,i);
	}
	
}

int main(){
	
	int border, num;
	printf("Sinir giriniz: ");
	scanf("%d",&border);
	printf("Sayi giriniz: ");
	scanf("%d",&num);
	
	asrin(border,num);
	
	return 0;
}
