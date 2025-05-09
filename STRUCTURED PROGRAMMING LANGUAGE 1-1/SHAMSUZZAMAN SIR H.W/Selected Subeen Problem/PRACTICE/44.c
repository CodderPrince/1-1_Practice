#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int row[21] = {0};
        int temp[21] = {0};
        int i, j, n;
        scanf("%d", &n);

        row[0] = 1;
        printf("1\n");

        for (i = 1; i <= n; i++) {
            temp[0] = 1;
            printf("%d ", temp[0]);

            for (j = 1; j < i; j++) {
                temp[j] = row[j - 1] + row[j];
                printf("%d ", temp[j]);
            }

            temp[j] = 1;
            printf("%d\n", temp[j]);

            for (j = 0; j <= i; j++) {
                row[j] = temp[j];
            }
        }

        if (t > 0) 
        {
            printf("\n");
        }
    }

    return 0;
}
