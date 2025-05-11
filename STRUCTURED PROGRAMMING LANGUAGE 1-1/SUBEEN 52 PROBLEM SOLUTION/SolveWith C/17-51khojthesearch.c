#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        char str[128], str2[128], *pos;
        gets(str);
        gets(str2);
        pos = strstr(str, str2);
        if(pos)
        {
            printf("%d\n",pos);
        }
        //else
        //{
            //printf("")
        //}

    }
    return 0;
}