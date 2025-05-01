#include<stdio.h>
#include<string.h>
int main()
{
        char s[100];
        scanf("%[^\n]",s);
        char s1[2];
        scanf("%s",&s1);
        int i,len,count=0;
        len=strlen(s);
       for(i=0 ; i<len ; i++)
       {
           if(s1[0]==s[i])
           {
               count++;
           }
       }
    if(count!=0)
        {
        printf(" occurrenece of '%c' in '%s'= %d",s1[0],s,count);
        }


       if(count==0)
       {
           printf("'%c' is not present",s1[0]);
       }
    return 0;
}
