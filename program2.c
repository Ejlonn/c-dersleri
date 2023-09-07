#include <stdio.h>
#include <math.h>

/*
ax2+bx+c þeklindeki 	denklemin kökleri

kök1 = -b›
*/


int main (){
	
	int a,b,c;
	float x1,x2;
	float delta;
	printf("Denklemin a degiskenini giriniz:");
	scanf("%d",&a);
	
	printf("Denklemin b degiskenini giriniz:");
	scanf("%d",&b);
	
	printf("Denklemin c degiskenini giriniz:");
	scanf("%d",&c);

	delta = (b*b)- (4*a*c);
	
	x1 = -b + (sqrt(delta))/(2*a);
	x2 = -b - (sqrt(delta))/(2*a);
	
	printf("Denkleminizin ilk koku x1 = %f, ikinci koku x2 = %f 'dir",x1,x2);
	
	
	return 0;
}
