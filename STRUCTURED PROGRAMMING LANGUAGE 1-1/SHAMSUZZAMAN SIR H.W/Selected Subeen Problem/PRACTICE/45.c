#include <stdio.h>
int main()
{
    int odd[51], even[51],i,j,t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        printf("1\n");
        printf("1 1\n");
        even[0] = 1;
        even[1] = 1;
        odd[0] = 1;
        odd[1] = 1;
        for (i = 3; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                even[0] = 1;
                printf("1 ");
                for (j = 1; j < i - 1; j++)
                {
                    even[j] = odd[j - 1] + odd[j];
                    printf("%d ", even[j]);
                }
                even[j] = 1;
                printf("%d\n", even[j]);
            }
            else
            {
                odd[0] = 1;
                printf("1 ");
                for (j = 1; j < i - 1; j++)
                {
                    odd[j] = even[j - 1] + even[j];
                    printf("%d ", odd[j]);
                }
                odd[j] = 1;
                printf("%d\n", odd[j]);
            }
        }
    }
    return 0;
}
//p-45
//explain kre de if r else statement er vitor ta