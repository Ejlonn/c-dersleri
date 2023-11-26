#include <stdio.h>
#include <math.h> // if your ide doesn't compile it automatically its because your ide does not link math.h library
                  // try compiling manually like this in terminal where this source code located:
                  // gcc -o 2021_midterm-q3.c 2021_midterm-q3.c -lm
                  // and run with this command ./2021_midterm-q3 or ./2021_midterm-q3.exe based on your operating system.

int main(){

    int remain, num, sum, product;
    int temp;
    
    do
    {
        printf("\nArmstrong olup olmadigini merak ettiginiz 3,4 veya 5 basamakli sayiyi giriniz: ");
        scanf("%d",&num);
        if (num < 0) break;
        sum= 0;
        product=1;
        temp = num;
        
        int digitCtr = 0;
        while (temp > 0)
        {
            temp/=10;
            digitCtr++;
        }
        
        temp = num;
        while (temp>0)
        {   
            remain = temp % 10;
            product = pow(remain,digitCtr);
            temp/=10;
            sum += product;
        }

        if (sum == num)
        {
            printf("Girdiginiz sayi armstrong sayidir.");
        }
        else
        {
            printf("Girdiginiz sayi armstrong sayi degildir.");
        }
        
    }while (num>0);
    


    return 0;
}
