#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
       /* char s[1002];
        gets(s);                 // useing  strrev function.
        strrev(s);
        printf("%s\n",s); */
        char s[1002],rev[1002];
        gets(s);
        int len=0,j=0,i;
        len=strlen(s);
        for( i=len-1 , j=0 ; i>=0 ; i-- , j++)
        {
            rev[j]=s[i];
        }
        rev[j]='\0';
        printf("%s\n",rev);


    }
    return 0;
}
