#include<stdio.h>
#include<string.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
    int count[26]={0};
    char s[100];
    scanf("%s",&s);
    int len,i;
    len=strlen(s);
    for(i=0 ; i<len ; i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            count[s[i]-'a']++;
        }
    }
    for(i=0 ; i<26 ; i++)
    {
      if(count[i]!=0)
      {
          printf("'%c' = %d\n",'a'+i,count[i]);
      }
    }
    }
    return 0;
}
