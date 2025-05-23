#include <stdio.h>

int main()
{
    FILE *aa = fopen("aa.txt", "a");
    FILE *bb = fopen("bb.txt", "r");

    if (aa == NULL || bb == NULL)
    {
        printf("Error opening files\n");
        return 1;
    }

    int x;
    while ((x = fgetc(bb)) != EOF)
    {
        fputc(x, aa);
    }

    printf("File append successful!\n");

    fclose(aa);
    fclose(bb);

    return 0;
}
