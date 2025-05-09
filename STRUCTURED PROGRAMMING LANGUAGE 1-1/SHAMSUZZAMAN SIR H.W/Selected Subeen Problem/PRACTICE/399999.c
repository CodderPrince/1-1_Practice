#include <stdio.h>
#include <string.h>

int main() 
{
    int t;
    scanf("%d", &t);
    getchar();

    while (t--) 
    {
        char str[101];
        char rev_str[101];
        gets(str);//bob hello
        strcpy(rev_str, str);//rev_str = bob hello
        strrev(rev_str);//bob olleh
        if (strcmp(str, rev_str) == 0) 
        {
            printf("Yes\n");
        } 
        else 
        {
            printf("No\n");
        }
    }

    return 0;
}