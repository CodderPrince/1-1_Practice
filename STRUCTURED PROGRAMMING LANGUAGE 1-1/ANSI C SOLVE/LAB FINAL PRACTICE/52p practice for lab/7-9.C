
#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int min,j,temp;
    for(i=0; i<n; i++)
    {
        min=i;
        for(j=i+1; j<n; j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
    printf("Sorted array\n");
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}