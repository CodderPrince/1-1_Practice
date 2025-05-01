#include<stdio.h>
int main()
{
int row,col;
int t;
scanf("%d",&t);
//while(t--)
    for(int i=1; i<=t; i++)
{
    int n;
    scanf("%d",&n);
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    if(t!=i)
    {/*JEHETU EXTRA NEW LINE USE KORA JABE NA TAI NEW LINE CHOLBE JOTOKHON TEST CASE ER 
    VALUE I ER EQUAL NA HOI TOTOKHON PORJONTO .. JEI T=I SO 3=3 HOYE JABE PROGRAM CLOSE*/
        printf("\n");
    }
}
return 0;
}