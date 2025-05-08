#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        char str[101];
        gets(str);
        int count[26]={0},i;
        for(i=0; i<strlen(str); i++)
        {
            if(str[i]>='a'  && str[i]<='z')
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
            //printf("\n");
        }
        printf("\n");
    }

    return 0;
}