/******************************************************
 *    Author:  PRINCE_14                              *
 *          --MD. AN NAHIAN PRINCE                    *
 *          --CSE,BRUR                                *
 *            PB: A. XORwice                          *
 ******************************************************/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c;
        scanf("%d %d",&a,&b);
        c = a^b;
        printf("%d\n",c);
    }

    return 0;
}