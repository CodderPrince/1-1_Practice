#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d", &t);
    getchar();

    while (t--)
    {
        char str[100001];
        int count[26] = {0};

        gets(str);

        for (int i = 0; i < strlen(str); i++)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                count[str[i] - 'a']++;
            }
        }

        for (int i = 0; i < strlen(str); i++)
        {
            if (str[i] >= 'a' && str[i] <= 'z' && count[str[i] - 'a'] > 0)
            {
                printf("%c = %d\n", str[i], count[str[i] - 'a']);
                count[str[i] - 'a'] = 0;
            }
        }
        if(t>0)
            {
                printf("\n");
            }

    }

    return 0;
}
