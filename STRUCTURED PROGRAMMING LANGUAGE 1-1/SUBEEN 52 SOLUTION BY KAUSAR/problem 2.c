#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    char s[1001];
    scanf("%s",s);
  int  len,i,x;
  len=strlen(s);
    for( i=0 ; s[i]!='\0' ; i++)
      {
        if(i==(len-1) )
        {
           x= s[len-1]%2;
            break;

        }
        else
        {
            continue;
        }
      }
      if(x==0)
      {
          printf("even\n");
      }
      else
      {
          printf("odd\n");
      }
    }
    return 0;

}
