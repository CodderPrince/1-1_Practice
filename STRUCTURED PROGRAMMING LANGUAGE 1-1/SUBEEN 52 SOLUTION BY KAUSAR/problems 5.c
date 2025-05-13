#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
while(T--)
    {
        int num;
        scanf("%d",&num);
        for( int i=0 ; i<num ; i++)
        {
            for( int j=0 ; j<num ; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}
