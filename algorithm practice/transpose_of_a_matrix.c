#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int row,column;
    int i,j;
    
    printf("Enter rows of the 2d matrixays: ");
    scanf("%d",&row);
    printf("Enter columns: ");
    scanf("%d",&column);

    int matrix1[row][column],
    transpozedmatrix [column][row];
    

    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            matrix1[i][j] = rand() % 10;
        }
    }
    
    printf("Random matrix is:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d ",matrix1[i][j]);
        }
        printf("\n");
    }
    
    printf("Transpozed matrix is:\n");
    for(i=0;i<column;i++)
    {
        for(j=0;j<row;j++)
        {
            transpozedmatrix[i][j]= matrix1[j][i];
            printf("%d ",transpozedmatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}