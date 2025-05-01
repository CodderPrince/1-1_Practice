#include <stdio.h>
#include <string.h>

void modifyString(char *str) {
    int len = strlen(str);
    for (int index = 0; index < len; index++) {
        if (str[index] == 'L') {
            str[index] = str[index - 1];
        } else if (str[index] == 'R') {
            str[index] = str[index + 1];
        }
    }
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char str[51];
        scanf("%s", str);

        modifyString(str);

        printf("%s\n", str);
    }

    return 0;
}
