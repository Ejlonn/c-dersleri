#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int n,sum = 0;
    int i,j;
    printf("Input the size of square matrix: ");
    scanf("%d",&n);
    
    int matrix[n][n];
    

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            matrix[i][j] = rand() % 10;
        }
    }
    printf("Matrix is\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",matrix[i][j]);
            if(i+j == n-1) // if u change this to (i==j) it will calculate the left diagonal.
            {
                sum+= matrix[i][j];
            }
        }
        printf("\n");
    }
    printf("Sum of right diagonal is: %d",sum);

    return 0;
}