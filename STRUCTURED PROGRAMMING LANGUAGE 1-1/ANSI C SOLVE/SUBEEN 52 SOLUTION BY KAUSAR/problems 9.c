#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    sca nf("%d",&t);
    while (t--)
    {
      int sq_root;
      int num;
      scanf("%d",&num);
      sq_root=sqrt(num);
      if(sq_root*sq_root==num)
      {
          printf("YES\n");
      }
      else
      {
          printf("NO\n");
      }
    }
    return 0;
}
