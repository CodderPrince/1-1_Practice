#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n1;
        scanf("%d",&n1);
        int a[n1];
        int i;
        for( i=0 ; i<n1 ; i++)
        {
            scanf("%d",&a[i]);
        }
        int n2;
        scanf("%d",&n2);
        int b[n2];
        int j;
        for( j=0 ; j<n2 ; j++)
        {
            scanf("%d",&b[j]);
        }
        int k;
        int c[n1+n2];
        for( i=0 , j=0 , k=0 ; i<n1 && j<n2 ; k++  )
        {
            if(a[i]<b[j])
            {
                c[k]=a[i];
                i++;
            }
            else
            {
                c[k]=b[j];
                j++;
            }
        }
        while(i<n1)
        {
            c[k]=a[i];
            i++;
            k++;
        }
        while(j<n2)
        {
            c[k]=b[j];
            j++;
            k++;
        }
        for( k=0 ; k<(n1+n2) ; k++)
        {
            {
                printf("%d ",c[k]);
            }
        }
        printf("\n");
    }
    return 0;
}
