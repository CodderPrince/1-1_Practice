#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n1,i;
        scanf("%d",&n1);
        int array1[n1];
        for(i=0; i<n1; i++)
        {
            scanf("%d",&array1[i]);
        }

        int n2,j;
        scanf("%d",&n2);
        int array2[n2];
        for(j=0; j<n2; j++)
        {
            scanf("%d",&array2[j]);
        }

        int temp[n1 + n2],k;
        for(i=0,j=0,k=0; i<n1 && j<n2; k++)
        {
            if(array1[i] < array2[j])
            {
                temp[k] = array1[i];
                i++;
            }

            else
            {
                temp[k] = array2[j];
                j++;
            }
        }

        while(i<n1)
        {
            temp[k] = array1[i];
            i++;
            k++;
        }

        while(j<n2)
        {
            temp[k] = array2[j];
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