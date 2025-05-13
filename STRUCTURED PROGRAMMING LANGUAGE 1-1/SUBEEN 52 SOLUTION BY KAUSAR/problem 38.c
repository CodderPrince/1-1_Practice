#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int i,j,n,m;
        scanf("%d %d",&n,&m);
        double r=(2*n-1);
        double k=r/2;
        printf("k is=%.2lf\n",k);
      double w=ceil(k);
        printf("w is=%.2lf\n",w);
        for(i=0 ; i<w ; i++)
        {
            for(j=0 ; j<i ; j++)
            {
                printf("%d",m);
            }
            printf("\n");
        }
        for(i=w ; i>0 ; i--)
        {
            for(j=0 ; j<i ; j++)
            {
                printf("%d",m);
            }
            printf("\n");
        }

    }
    return 0;
}
