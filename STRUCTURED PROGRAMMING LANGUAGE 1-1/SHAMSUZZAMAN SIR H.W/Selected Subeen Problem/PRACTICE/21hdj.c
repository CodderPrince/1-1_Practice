#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        char str[1001];
        int i;
        gets(str);
        for(int i=strlen(str)-1; i>=0; i--)
        {
            printf("%c",str[i]);
        }
        printf("\n");
        
    }
    return 0;
}