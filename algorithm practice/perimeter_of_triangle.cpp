#include <stdio.h>
#include <math.h>

float findPerimeter(float arr[]){
	
	float perimeter;
	perimeter = sqrt((arr[0]*arr[1]));
	return perimeter;
}


int main(){
	
	float x[2],y[2],z[2];
	int i,j;
	float xPerimeter,yPerimeter,zPerimeter;
	for(i=0;i<2;i++)
	{
    	printf("x Kenarinin koordinatlarini giriniz: ");
    	scanf("%f",&x[i]);
	}
	
	for(i=0;i<2;i++)
	{
    	printf("y Kenarinin koordinatlarini giriniz: ");
    	scanf("%f",&y[i]);
	}
	
	for(i=0;i<2;i++)
	{
    	printf("z Kenarinin koordinatlarini giriniz: ");
    	scanf("%d",&z[i]);
	}
	
	xPerimeter = findPerimeter(x);
	yPerimeter = findPerimeter(y);
	zPerimeter = findPerimeter(z);
	
	printf("Ucgenin cevresi: %.2f",(xPerimeter+yPerimeter+zPerimeter));
	
	return 0;
}
