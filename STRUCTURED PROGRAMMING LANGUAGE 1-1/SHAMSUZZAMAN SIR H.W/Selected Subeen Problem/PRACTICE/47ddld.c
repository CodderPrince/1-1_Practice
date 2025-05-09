#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y,i,j;
        scanf("%d",&x);
        int a1[x];
        for(i=0; i<x; i++)
        {
            scanf("%d",&a1[i]);
        }


        scanf("%d",&y);
        int a2[y];
        for(j=0; j<y; j++)
        {
            scanf("%d",&a2[i]);
        }

        int k,a3[x+y];
        for(i=0,j=0,k=0; k<x && k<y; k++)
        {
            if (a1[i]<a2[j])
            {
                a3[k] = a1[i];
                i++;
            }
            else
            {
                a3[k] = a2[j];
                j++;
            }
        }

        
    }
}