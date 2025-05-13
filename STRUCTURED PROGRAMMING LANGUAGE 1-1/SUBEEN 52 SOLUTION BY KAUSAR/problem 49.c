#include<stdio.h>
#include<math.h>
void prime()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for( i=2 ; i<n ; i++)
    {
        a[i]=1 ;
    }
    int root=sqrt(n)+1;
    for(i=2 ; i<root ; i++ )
    {
        if(a[i]==1)
        {
            for(j=i+i ; j<=n ; j=j+i)
            {
                a[j]=0 ;
            }
        }
    }

}

int main()
{
    int i,t;
        prime();
    scanf("%d",&t);
    while(t--)
    {
    long long  int n;
      scanf("%lld",&n);
      int a[n];
    int   sqrt=(n);

       int count=0;
      for( i=2 ; i<sqrt ; i++)
      {
        if(  a[i]%n==0)
          {
           count++;
            break;
          }

      }
      if(count==0)
      {
          printf("%lld is prime",n);
      }
      else
      {
         printf("%lld is not prime",n);
      }
    }
    return 0;


}

