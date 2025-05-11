#include<stdio.h>
#include<math.h>
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
        int i,count=0;
        for(i=0; i<strlen(str); i++)
        {
            if(str[i]==' ')
            {
                count++;
            }
        }
        printf("%d\n",count+1);
    }

    return 0;
}