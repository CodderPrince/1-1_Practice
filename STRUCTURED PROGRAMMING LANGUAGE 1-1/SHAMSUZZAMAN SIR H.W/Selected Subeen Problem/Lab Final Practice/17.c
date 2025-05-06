#include<stdio.h>
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
        int i, count=0;
        for(i=0; i<strlen(str); i++)
        {
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
            {
                count++;
            }
        }
        printf("Number of vowels = %d\n",count);
    }

    return 0;
}