#include<stdio.h>

int main()
{
    int mat[5][5];
    int i,j;
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            if(i<j)
            {
                mat[i][j]=1;
            }
            else if(j<i)
            {
                mat[i][j]=-1;
            }
            else
            {
                mat[i][j]=0;
            }
        }
    }
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            printf("%2d",mat[i][j]);
        }
        printf("\n");
    }
}