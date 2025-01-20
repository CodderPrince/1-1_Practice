// Sum from text file [12.5 HARD VERSION]

#include <stdio.h>

int main()
{
    FILE *textFile = fopen("integers.txt", "r");

    if (textFile == NULL)
    {
        printf("Error opening file!\n");
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
            printf("Warning! Non-intergers found!\n");
            fscanf(textFile, "%*s");
        }
    }

    fclose(textFile);
    textFile = fopen("integers.txt", "a");
    fprintf(textFile, "%d\n", sum);
    fclose(textFile);
    printf("Sum append successfully!\n\n");

    return 0;
}