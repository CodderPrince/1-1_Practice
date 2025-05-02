#include <stdio.h>
#include <unistd.h>

int main()
{
    FILE *fp = fopen("file.txt", "r+"); // open the file in read-write mode
    if (fp == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }
    char line[100];     // buffer for reading a line
    char new_line[100]; // buffer for writing a new line
    int pos = 0;        // variable for storing the current position in the file

    while (fgets(line, sizeof(line), fp) != NULL)
    {                                                // read until end of file or newline character
        pos = ftell(fp);                             // get the current position in the file
        fputs(new_line, fp);                         // write a new line to the end of the file
        fseek(fp, pos + strlen(new_line), SEEK_SET); // move the file pointer back to where it was before reading
        fgets(line, sizeof(line), fp);               // read another line from the beginning of the file
    }

    fclose(fp); // close the file
    return 0;
}
