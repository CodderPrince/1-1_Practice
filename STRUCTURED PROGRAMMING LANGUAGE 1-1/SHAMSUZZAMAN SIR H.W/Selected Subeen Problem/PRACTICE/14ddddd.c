#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        char str[101],ch[2];
        gets(str);
        gets(ch);
        int count=0,i;
        for(i=0; i<strlen(str); i++)
        {
            if(str[i]==ch[0])
            {
                count++;
            }
        }
        if(count>0)
        {
            printf("Occurence '%c' in '%s' is = %d\n",ch[0],str,count);
        }
        else
        {
            printf("'%c' is not present\n",ch[0]);
        }
    }

    return 0;
}