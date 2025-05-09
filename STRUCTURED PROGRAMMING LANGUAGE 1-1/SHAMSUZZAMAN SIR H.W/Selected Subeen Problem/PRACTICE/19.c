#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        char str[10001];
        int i,count=0;
        gets(str);
        for(i=0; i<strlen(str); i++)
        {
            if(str[i]==' ')
            {
                count++;
            }
        }
        if(count>0)
        {
            printf("Count = %d\n",count+1);
        }
    }
    return 0;
}