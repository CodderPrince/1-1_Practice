#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
     getchar();
    while(t--)
    {
        int len;
        char str [101];
        gets(str);
        len= strlen(str);
        //len means input 100 but len is 3-1=2%2==0; so this is even number
        if(str[len-1]%2 == 0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
    }

    return 0;
}