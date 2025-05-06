#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        char str[101], ch[2];
        gets(str);
        gets(ch);
        int i,count=0;
        for(i=0; i<strlen(str); i++)
        {
            if(str[i] == ch[0])
            {
                count++;
            }
        }
        if(count>0)
        {
            printf("Occurence of '%c' in '%s' = %d\n",ch[0],str,count);
        }
        else
        {
            printf("'%c' is not present\n",ch[0]);
        }

    }

    return 0;
}