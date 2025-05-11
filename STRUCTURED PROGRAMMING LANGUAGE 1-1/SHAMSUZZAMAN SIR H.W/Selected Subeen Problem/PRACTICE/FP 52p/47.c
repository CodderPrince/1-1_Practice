#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int i,j,k,n1;
        scanf("%d",&n1);
        int arr[n1];
        for(i=0; i<n1; i++)
        {
            scanf("%d",&arr[i]);
        }
        int n2;
        scanf("%d",&n2);
        int arr[n2];
        for(j=0; j<n2; j++)
        {
            scanf("%d",&arr[j]);
        }

        int temp[n1+n2];
        for(i=0,j=0,k=0; i<n1 && j<n2; k++)
        {
            if(arr[i]<arr[j])
            {
                temp[k] = arr[i];
                i++;
            }
            else
            {
                temp[k] = arr[j];
                j++;
            }
        }

        while(i<n1)
        {
            temp[k] = arr[i];
            k++;
            i++;
        }
        while(j<n2)
        {
            temp[k] = arr[j];
            k++;
            j++;
        }

        for(k=0; k<(n1+n2); k++)
        {
            printf("%d ",temp[k]);
        }
        printf("\n");
    }

    return 0;
}