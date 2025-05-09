#include <stdio.h>
#include <string.h>

int main() {
    int T, N;
    scanf("%d", &T);

    while(T--) {
        scanf("%d", &N);
        char str[N][10001];

        for(int i = 0; i < N; i++) {
            scanf("%s", str[i]);
        }

        for(int i = 0; i < N; i++) {
            for(int j = i+1; j < N; j++) {
                if(strcmp(str[i], str[j]) > 0) {
                    char temp[10001];
                    strcpy(temp, str[i]);
                    strcpy(str[i], str[j]);
                    strcpy(str[j], temp);
                }
            }
        }

        for(int i = 0; i < N; i++) {
            printf("%s\n", str[i]);
        }
    }

    return 0;
}