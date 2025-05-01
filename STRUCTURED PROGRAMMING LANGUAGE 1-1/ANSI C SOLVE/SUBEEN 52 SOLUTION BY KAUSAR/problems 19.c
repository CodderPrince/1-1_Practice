#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--){
  char s[100];
  int count=0,len,i,t;
   gets(s);
  len=strlen(s);
  for(i=0 ; i<len ; i++)
  {
      if(s[i]==' ')
      {
          count++;
      }

  }
  printf("%d",count+1);
  printf("\n");
    }

  return 0;
}

