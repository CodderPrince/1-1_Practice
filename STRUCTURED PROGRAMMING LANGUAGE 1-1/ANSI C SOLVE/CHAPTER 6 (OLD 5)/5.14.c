#include<stdio.h>
int main()
{
    int i,n,r=0;
    printf("Enter any number: ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            r++;
        }
    }
    if(r==0)
    {
        printf("prime\n");
    }
    else
    {
        printf("not prime\n");
    }
    return 0;
}
