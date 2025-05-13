#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
          int x,k,i;
          int sum=0;
          double result;
          scanf("%d %d",&x,&k);
          for( i=0 ; i<=k ; i++)
          {
              result=pow(x,i);
              sum=sum+result;
          }
           printf("Result = %.0d\n",sum);
    }
    return 0;
}
