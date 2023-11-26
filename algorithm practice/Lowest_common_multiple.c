#include <stdio.h>

int main(){  

    int num1,num2,lcm=1,max;
    
    printf("Enter first number: ");
    scanf("%d",&num1);

    printf("Enter second number: ");
    scanf("%d",&num2);
    max = (num1>num2) ? num1:num2; //ternary operator

    
    while (1)
    {
        if(max % num1 == 0 && max % num2 == 0)
        {
            printf("LCM is: %d",max);
            break;
        }
        max++;
    }
    // we find LCM by incrementing max by 1 until we can find a num that can divide both numbers without a remainder.
    // we could find GCD of these numbers and we could use an equation that is:
    // LCM == Number1 * Number2 / GCD
    // and if we use euclidean algorithm to find GCD via using recursive function, we could lower the time complexity of finding LCM algorithm
    
    return 0;
}