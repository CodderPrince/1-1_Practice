#include<stdio.h>
int main()
{
    int i,count=0;
    for(i=1; i<=13; i++)
    {
        for(int j=1; j<=i; j++)
        {
            count++;
            printf("%d",count);
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}