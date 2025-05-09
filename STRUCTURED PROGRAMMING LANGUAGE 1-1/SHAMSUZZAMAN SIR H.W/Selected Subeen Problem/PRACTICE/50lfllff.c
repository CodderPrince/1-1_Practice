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
        int i,j;
        for(i=0; i<strlen(str); i++)
        {
            if(str[i]=='L')
            {
                str[i]=str[i-1];
            }
            else if(str[i]=='R')
            {
                str[i]=str[i+1];
            }
            else
            {
                str[i]=str[i];
            }
        }
        printf("%s\n",str);
    }

    return 0;
}