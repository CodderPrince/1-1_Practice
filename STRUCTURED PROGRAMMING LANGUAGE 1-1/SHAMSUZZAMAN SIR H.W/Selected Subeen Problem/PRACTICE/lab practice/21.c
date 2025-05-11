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
        printf("%s\n",strrev(str));
    }

    return 0;
}