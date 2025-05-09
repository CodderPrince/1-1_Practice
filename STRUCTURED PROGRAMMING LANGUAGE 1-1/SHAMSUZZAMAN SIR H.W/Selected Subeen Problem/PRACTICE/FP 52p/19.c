#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        char str[100001];
        gets(str);
        int i,count=1;
        for(i=0; i<strlen(str); i++)
        {
            if(str[i]==' ')
            {
                count++;
            }
        }

        printf("Count = %d\n",count);
    }

    return 0;
}
