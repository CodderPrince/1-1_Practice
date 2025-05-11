#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int num,count=0;
        scanf("%d",&num);
        for(int i=5; i<=num; i= i*5)
        {
            count = count + num/i;
        }
        printf("%d\n",count);
    }
    return 0;
}
/*in general in number 4 factorial there is no zero in last zero start at number 5
factorial zero is increased a sequence every 5 number after one zero increased so
we start loop at 5 and increased 5++
n=100, i=5, 5<=100, count= 0 + 100/5=20
n=100, i=5x5=25, 25<=100, count= 20 + 100/25=20+4=24
n=100, i=25x5=125, 125!<=100, so print 24 
here we print how many zero in a factorial number*/