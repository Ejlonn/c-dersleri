#include <stdio.h>


int main(){

    int n,k;
    printf("First array's size: ");
    scanf("%d",&n);
    
    int arr1[n];
    int i,j;
    printf("Input %d elements to first array\n",n);
    for(i=0;i<n;i++)
    {
        printf("Element %d: ",i);
        scanf("%d",&arr1[i]);
    }
    printf("Second array's size: ");
    scanf("%d",&k);
    int arr2[k];
    
    printf("Input %d elements to second array\n",k);
    for(i=0;i<k;i++)
    {
        printf("Element %d: ",i);
        scanf("%d",&arr2[i]);
    }
    int mergedArray[n+k];
    
    for (i=0;i<n;i++)
    {
        mergedArray[i] = arr1[i];
    }
    
    for (i=0;i<n+k;i++)
    {
        mergedArray[n+i] = arr2[i];
    }
    
    printf("Merged array: ");
    for(i=0;i<n+k;i++)
    {
        printf("%d ",mergedArray[i]);
    }
    for(i=0;i<n+k;i++)
    {
        for(j=0;j<n+k;j++)
        {
            if(mergedArray[i]>mergedArray[j])
            {
                int temp = mergedArray[i];
                mergedArray[i]=mergedArray[j];
                mergedArray[j]=temp;
            }
        }
    }
    
    printf("\nMerged array in descending order: ");
    for(i=0;i<n+k;i++)
    {
        printf("%d ",mergedArray[i]);
    }


    return 0;
}
