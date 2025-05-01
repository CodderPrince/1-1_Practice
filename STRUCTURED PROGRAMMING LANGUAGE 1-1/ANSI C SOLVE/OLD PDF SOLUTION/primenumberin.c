#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, count = 0;
        int i, j;
        scanf("%d %d", &a, &b);
        
        for (i = a; i <= b; i++)
        {
            for (j = 2; j <= i; j++)
            {
                if (i % j == 0)
                {
                    break;
                }
            }
            if (j == i)
            {
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
