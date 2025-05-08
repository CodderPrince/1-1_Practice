#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    getchar(); // consume newline character after scanf

    for (int i = 0; i < n; i++) {
        char str[100];
        fgets(str, 100, stdin);
        int len = strlen(str);

        for (int j = len - 2; j >= 0; j--) {
            printf("%c", str[j]);
        }
        printf("\n");
    }

    return 0;
}