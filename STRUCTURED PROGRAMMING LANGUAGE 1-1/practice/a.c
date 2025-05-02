#include <stdio.h>
#include <string.h>

void copyy(char s[], char s2[])
{

    int i;
    for ( i = 0; s[i] != '\0'; i++)
    {
        s2[i] = s[i];
    }
    s2[i] = '\0';
    printf("%s\n",s2);
    // cout << s2 << nl;
}

int main()
{
    char s[20];
    //getchar();
    gets(s);
    char s2[20];
    copyy(s, s2);

    return 0;
}