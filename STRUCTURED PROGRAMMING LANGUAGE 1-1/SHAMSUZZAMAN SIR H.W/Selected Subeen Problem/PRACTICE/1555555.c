#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        char str1[101], count[26]={0};
        int i;
        gets(str1);
        for(i=0; i<strlen(str1); i++)
        {
            if(str1[i]>='a' && str1[i]<='z')
            {
                count[str1[i]-'a']++;
            }
        }
        for(i=0; i<26; i++)
        {
            if(count[i]!=0)
            {
                printf("%c = %d\n",'a'+i, count[i]);
            }
        }
    }
    return 0;
}