#include <stdio.h>
struct Example {
    char c;
    int i;
    char d;
};

int main() {
    printf("Size of struct Example: %zu\n", sizeof(struct Example));
    return 0;
}