// append two file

#include <stdio.h>

int main()
{
    FILE *source = fopen("source.txt", "a");
    FILE *dest = fopen("dest.txt", "r");

    if (source == NULL || dest == NULL)
    {
        printf("Error files open or file missing!\n");
        return 1;
    }

    int a;
    while ((a = fgetc(dest)) != EOF)
    {
        fputc(a, source);
    }

    printf("\nFile append successfully!\n\n");

    fclose(source);
    fclose(dest);

    return 0;
}