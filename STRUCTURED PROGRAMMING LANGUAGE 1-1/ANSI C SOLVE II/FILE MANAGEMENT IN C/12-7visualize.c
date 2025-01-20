/*
lines[0] = "Line 1"
lines[1] = "Line 2"
lines[2] = "Line 3"

*/
#include <stdio.h>

int main()
{
    char lines[5][1000];
    int line_count = 5;

    // Input data
    strcpy(lines[0], "Line 1");
    strcpy(lines[1], "Line 2");
    strcpy(lines[2], "Line 3");
    strcpy(lines[3], "Line 4");
    strcpy(lines[4], "Line 5");

    int offset = 2;

    if (offset > 0)
    {
        for (int i = offset; i < line_count; i++)
        {
            printf("%s\n", lines[i]);
        }
    }
    else if (offset < 0)
    {
        int start_index = line_count + offset;
        if (start_index < 0)
        {
            printf("Error: Offset value exceeds the number of lines in the file.\n");
        }
        else
        {
            for (int i = start_index; i < line_count; i++)
            {
                printf("%s\n", lines[i]);
            }
        }
    }
    else
    {
        printf("Error: Offset value should be a non-zero integer.\n");
    }

    return 0;
}
