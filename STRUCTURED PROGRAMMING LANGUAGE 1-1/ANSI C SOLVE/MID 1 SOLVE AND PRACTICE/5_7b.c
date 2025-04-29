#include<stdio.h>

int main()
{
    int i,j;
    for(i=1; i<=5; i++)
    {
        for(j=2; j<=i+1; j++)
        {
            printf("%d",(i+j)%2);
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}