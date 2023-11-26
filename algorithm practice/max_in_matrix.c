#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int row,column,max = 0,ctr=0;
    int i,j;
    
    printf("Row: ");
    scanf("%d",&row);
    printf("Column: ");
    scanf("%d",&column);

    int arr[row][column];
    
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            arr[i][j] = rand() % 11-1;
        }
    }
    
    printf("Random array is:\n");
    
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            if (max < arr[i][j])
            {
                max=arr[i][j];
            }
            
        }
    }
    printf("Max number in this random array is: %d",max);

    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            if (max == arr[i][j])
            {
                ctr++;
            }
            
        }
    }
    printf("\nMax number repeats %d times in this array",ctr);


    return 0;
}