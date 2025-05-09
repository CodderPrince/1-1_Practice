#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        char str [10001];
        int i,count=0;
        gets(str);
        for(i=0; i<strlen(str); i++)
        {
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
            {
                count++;
            }
        }
        if(count>0)
        {
            printf("Number of vowels = %d\n",count);
        }
    }
    return 0;
}