#include<stdio.h>

int main()
{
    int i = 0;
    printf("Hello");
    char s[4] = {'\b', '\t', '\r', '\n'};
    for(i=0; i<4; i++)
    {
        printf("%c",s[i]);
    }

    return 0;
}


 