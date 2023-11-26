#include <stdio.h>

int main(){

    printf("C program to find duplicate elements in given array.\n");

    int total = 0, n;

    printf("Enter the number of elements to be stored in the array: ");
    scanf("%d",&n);
    int arr[n];
    
    int i,j;
    for(i=0;i<n;i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    
    printf("Your array: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
    
        {
            if (arr[i]==arr[j])
            {
                total++;
            }
            
        }

    }
    
    printf("\nTotal number of duplicate elements found in the array is: %d",total);

    return 0;
}