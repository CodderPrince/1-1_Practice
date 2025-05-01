#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
      long int a,b,c;
      scanf("%ld %ld %ld",&a,&b,&c);
      for( int i=1 ; i<=c ; i++)
      {
          if(i%a==0 && i%b==0)
          {
              printf("%ld\n",i);
          }
      }
    }
    return 0;
}

