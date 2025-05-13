#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int n[100];
    int i,j;
    for(i=0;i<3;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<3;i++)
    {
        for(j=i+1;j<3;j++)
        {
            if(n[i]>n[j])
            {
               int tem=n[i];
                n[i]=n[j];
                n[j]=tem;
            }
        }
    }
    for(i=0;i<3;i++)
    {
        printf("%d  ",n[i]);
    }
    print f("\n");
    }
    return 0;

}
