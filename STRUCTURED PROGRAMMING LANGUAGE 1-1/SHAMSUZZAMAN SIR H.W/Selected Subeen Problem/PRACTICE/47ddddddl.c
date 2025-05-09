//coalition of array

#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n1;
        scanf("%d",&n1);
        int arr1[n1];
        int i;
        for(i=0; i<n1; i++)
        {
            scanf("%d",&arr1[i]);
        }
        int n2,j;
        scanf("%d",&n2);
        int arr2[n2];
        for(j=0; j<n2; j++)
        {
            scanf("%d",&arr2[j]);
        }
        int temp[n1+n2];
        int k;
        for(i=0,j=0,k=0; i<n1 && j<n2; k++)
        {
            if(arr1[i]<arr2[j])
            {
                temp[k]=arr1[i];
                i++;
            }
            else 
            {
                temp[k]=arr2[j];
                j++;
            }
        }
        while(i<n1)
        {
            temp[k]=arr1[i];
            i++;
            k++;
        }
        while(j<n2)
        {
            temp[k]=arr2[j];
            j++;
            k++;
        }
        for(k=0; k<(n1+n2); k++)
        {
            printf("%d ",temp[k]);
        }
        printf("\n");
    }

    return 0;
}