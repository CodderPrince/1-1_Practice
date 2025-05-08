#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        int i;
        char str[101], count[26]={0};
        gets(str);
        for(i=0; i<strlen(str); i++)
        {
            if(str[i]>='a' && str[i]<='z')
            {
                count[str[i]-'a']++;
            }
        }
        for(i=0; i<26; i++)
        {
            if(count[i]!=0)
            {
                printf("%c = %d\n",'a'+i, count[i]);
            }
        }
        printf("\n");
    }
    return 0;
}