#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        int i,count=0;
        char str[101],ch[2];
        gets(str);
        gets(ch);
        for(i=0; i<strlen(str); i++)
        {
            if(str[i]==ch[0])
            {
                count++;
            }
        }
        if(count>0)
        {
            printf("Occurence of '%c' in '%s' is = %d\n",ch[0],str,count);
        }
        else
        {
            printf("'%c' is not present\n",ch[0]);
        }
    }
    printf("\n");
    return 0;
}