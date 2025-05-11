#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x;
        scanf("%d",&x);
        int arr1[x];
        int i;
        for(i=0; i<x; i++)
        {
            scanf("%d",&arr1[i]);
        }

        int y;
        scanf("%d",&y);
        int arr2[y];
        int j;
        for(j=0; j<y; j++)
        {
            scanf("%d",&arr2[j]);
        }

        int k;
        int temp[x+y];
        for(i=0,j=0,k=0; i<x && j<y; k++)
        {
            if ( arr1[i]<arr2[j])
            {
                temp [k] = arr1[i];
                i++;
            }
            else
            {
                temp [k] = arr2[j];
                j++;
            }
        }
        while(i<x)
        {
            temp [k] = arr1[i];
            k++;
            i++;
        }
        while(j<y)
        {
            temp[k] = arr2[j];
            k++;
            j++;
        }

        for(k=0; k<(x+y); k++)
        {
            printf("%d ",temp[k]);
        }
        printf("\n");
    }

    return 0;
}