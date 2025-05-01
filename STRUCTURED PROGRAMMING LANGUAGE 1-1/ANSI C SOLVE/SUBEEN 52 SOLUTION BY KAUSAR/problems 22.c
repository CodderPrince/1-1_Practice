#include<stdio.h>
#include<math.h>
#define size 100001
//int b[size];
 int  ara[size];
  void seive()
{
    int i,j,root;
  for(i=2; i<size ; i++)
  {
      ara[i]=1 ;  /// 1 means true
  }
  root=sqrt(size)+1;
  for(i=2 ; i<root ; i++)
  {
      if(ara[i]==1)
      {
          for(j=i+i ; j<=size ; j=j+i)
        // for(j=2 ; i*j<=size ; j++)
          {
              ara[j]=0 ;  /// 0 means false
          }
      }
  }
}

int main()
{
    int count,t,a,b,i,j;
    seive();
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d", &a , &b);
        count=0;
        for(i=a ; i<=b ; i++)
        {
            if(ara[i]!=0)
            {
                count++;
            }
        }
        printf("%d",count);
        printf("\n");

    }
    return 0;

}
