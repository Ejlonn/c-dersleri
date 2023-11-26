#include <stdio.h>

int main(){

    int num1,num2,lowest,gcd;
    printf("Enter num1: ");
    scanf("%d",&num1);

    printf("Enter num2: ");
    scanf("%d",&num2);
    if (num1>num2)
    {
        lowest=num2;
    }
    else if (num1<num2)
    {
        lowest=num1;
    }
    else
    {
        lowest=num1;
    }
    
    int i;
    for(i=1;i<lowest;i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            gcd=i;
        }
    }
    printf("GCD of given numbers is: %d",gcd);

    return 0;
}