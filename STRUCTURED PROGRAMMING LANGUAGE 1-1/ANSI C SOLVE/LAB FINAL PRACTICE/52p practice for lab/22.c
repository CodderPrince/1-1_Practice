
#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int f,l,i,j,count=0;
        scanf("%d %d",&f,&l);
        for(i=f; i<=l; i++)
        {
            if(i==1)
            {
                continue;
            }
            for(j=2; j*j<=i; j++)
            {
                if(i%j==0)
                {
                    break;
                }
            }
            if(j*j>i)
            {
                count++;
            }
            
        }
        printf("%d\n",count);
    }

    return 0;
}