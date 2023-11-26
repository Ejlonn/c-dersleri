#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int row,column;
    int i,j;
    
    printf("Enter rows of the 2d arrays: ");
    scanf("%d",&row);
    printf("Enter columns: ");
    scanf("%d",&column);

    int arr1[row][column],
    arr2 [row][column],
    arr3[row][column]; 

    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            arr1[i][j] = rand() % 10;
            arr2[i][j] = rand() % 10;
        }
    }
    
    printf("Array1 is:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }

    printf("\nArray2 is:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }

    printf("\nThe addition of two matrix is:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }

    return 0;
}