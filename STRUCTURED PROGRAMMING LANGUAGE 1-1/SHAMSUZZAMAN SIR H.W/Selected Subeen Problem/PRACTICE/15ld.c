#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        char str[101],ch[26]={0};
        int i;
        gets(str);
        for(i=0; i<strlen(str); i++)
        {
            if(str[i]>='a' && str[i]<='z')
            {
                ch[str[i]-'a']++;
            }
        }
        for(i=0; i<26; i++)
        {
            if(ch[i]!=0)
            {
                printf("%c = %d\n",'a'+i, ch[i]);
            }
        }
        printf("\n");
    }
    return 0;
}