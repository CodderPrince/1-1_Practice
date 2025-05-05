/*
    PRINCE[12105007]
    Problem number: 12.7
    Write a program that requests for a file name and an integer, known as offset value.
    The program then reads the file starting from the location specified by the offset
    value and prints on the contents the screen.

    Note:
    If the offset value is a positive integer, then printing skips that many lines.
    If it is a negative number, it prints that many lines from the end of the file.
    An appropriate error message should be printed, if anything goes wrong.

    Testcase:   a.txt       offset:
                Line 1      2
                Line 2                  Output:
                Line 3                  Line 3
                Line 4                  Line 4
                Line 5                  Line 5

                a.txt       offset:
                Line 1      -2
                Line 2
                Line 3                  Output:
                Line 4                  Line 4
                Line 5                  Line 5
*/

#include <stdio.h>

int main()
{
    char filename[100];
    int offset;

    printf("\nEnter the offset value (positive or negative integer): ");
    scanf("%d", &offset);
    printf("\n");

    FILE *file = fopen("offset.txt", "r");

    if (file == NULL)
    {
        printf("Error: Unable to open the file.\n\n");
        return 1;
    }

    char lines[1000][1000];
    int line_count = 0, i;

    while (fgets(lines[line_count], sizeof(lines[line_count]), file) != NULL)
    {
        line_count++;
    }

    if (offset > 0)
    {
        for (i = offset; i < line_count; i++)
        {
            printf("%s", lines[i]);
        }
        printf("\n\n");
    }

    else if (offset < 0)
    {

        int start_index = line_count + offset;
        if (start_index < 0)
        {
            printf("Error: Offset value exceeds the number of lines in the file.\n\n");
        }
        else
        {

            for (i = start_index; i < line_count; i++)
            {
                printf("%s", lines[i]);
            }
            printf("\n\n");
        }
    }

    else
    {
        printf("Error: Offset value should be a non-zero integer.\n\n");
    }

    fclose(file);

    return 0;
}
