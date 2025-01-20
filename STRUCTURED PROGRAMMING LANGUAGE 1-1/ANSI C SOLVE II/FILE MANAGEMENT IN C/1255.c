#include <stdio.h>

int main()
{
    FILE *textFile = fopen("integers.txt", "r");

    if (textFile == NULL)
    {
        printf("Error opening file or file missing!\n");
        return 1;
    }

    int num, sum = 0, result;

    while ((result = fscanf(textFile, "%d", &num)) != EOF)
    {
        if (result == 1)
        {
            sum = sum + num;
        }
        else
        {
            printf("Warning: Non-integer value found in the file, skipping.\n");
            // Consume the non-integer value to avoid an infinite loop
            fscanf(textFile, "%*s");
        }
    }

    fclose(textFile);

    textFile = fopen("integers.txt", "a");
    fprintf(textFile, "%d\n", sum);
    fclose(textFile);
    printf("File append successful\n");

    return 0;
}
