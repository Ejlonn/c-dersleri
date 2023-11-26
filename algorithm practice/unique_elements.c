#include <stdio.h>

int main(){

    int n,ctr=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    int arr[n];
    
    int i;
    for(i=0;i<n;i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("The unique elements found in the array: ");

    int j;
    for(i=0;i<n;i++)
    {
        ctr=0;
        for(j=0;j<n;j++)
        {
            if (i!=j)
            {
                if (arr[i]==arr[j])
                {
                    ctr++;
                }
                
            }
        }
    if (ctr==0)
        {
            printf("%d ",arr[i]);
        }

    }


    return 0;
}