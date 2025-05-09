#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i;
    for (i = 0; i < n; i++)
    {
        int r, num;
        scanf("%d %d", &r, &num);
        int j, k;
        for (j = 0; j < r; j++)
        {
            for (k = 0; k <= j; k++)
            {
                
                printf("%d ", num);
                
            }
            printf("\n");
        }
        for (j = r - 1; j > 0; j--)
        {
            for (k = 0; k < j; k++)
            {
                
                printf("%d ", num);
                
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}