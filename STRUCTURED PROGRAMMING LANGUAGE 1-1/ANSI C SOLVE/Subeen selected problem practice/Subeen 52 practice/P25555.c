#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
    int n1, n2,lcm;
    scanf("%d %d",&n1, &n2);
    if(n1>n2)
    {
    lcm = n1;
    }
    else
    {
        lcm = n2;
    }
    //int x;
    for(i=0; i<t; i++)
    {

        if(lcm % n1 == 0 && lcm%n2 == 0)
        {
            printf("LCM = %d\n",lcm);
            break;
        }
        lcm++;
    }
    }
return 0;
}
