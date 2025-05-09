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
        char str1[101],str2[101];
        gets(str1);
        
        for(i=0; i<strlen(str1); i++)
        {
            if(str1[i]=='L')
            {
                str2[i] = str1[i-1];
            }
            else if(str1[i]=='R')
            {
                str2[i]=str1[i+1];
            }
            else
            {
                str2[i] = str1[i];
            }
        }

        str2[strlen(str1)] = '\0';
        printf("%s\n",str2);
    }

    return 0;
}