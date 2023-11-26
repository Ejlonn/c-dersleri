#include <stdio.h>

int main(){ 

    int num1,num2;
    
    printf("Enter the first number: ");
    scanf("%d",&num1);

    printf("Enter Second number: ");
    scanf("%d",&num2);
    
    while (num2>0)
    {
        int remainder = num1 % num2;
        num1=num2;
        num2=remainder;
    }
    printf("%d",num1);
    

    return 0;
}

