#include <stdio.h>

void copyy(char s[], char s2[])
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
        s2[i] = s[i];
    }
    s2[i] = '\0';
    //printf("%s\n", s2); // Changed cout to printf for C
}

int main()
{
    char s[10];
    //getchar(); // Remove this line, as it's unnecessary and may cause issues

    gets(s); // Note: gets is unsafe, consider using fgets instead
    char s2[20]; // Added a semicolon here

    copyy(s, s2);

    return 0;
}
