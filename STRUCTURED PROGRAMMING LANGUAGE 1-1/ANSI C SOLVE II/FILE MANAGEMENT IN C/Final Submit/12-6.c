/*  PRINCE[12105007]
    Problem number: 12.6
    Write a program that prompts the user for two files,
    one containing a line of text known as source file and other,
    an empty file known as target file and then copies the contents of source file
    into the target file.
    Modify the program so that a specified character is deleted from
    the source file as it is copied to target file.


    Testcase:   s.txt:            d.txt:        DeleteChar:
                Hello Prince!                   H
                How are you?

                output:
                ello Prince!
                ow are you?
*/

#include <stdio.h>

int main()
{
    char sourceFileName[100];
    char targetFileName[100];
    char charToDelete;

    printf("Enter the character to delete: ");
    scanf(" %c", &charToDelete);

    FILE *sourceFile = fopen("s.txt", "r");
    if (sourceFile == NULL)
    {
        printf("Error opening source file.\n");
        return 1;
    }

    FILE *targetFile = fopen("d.txt", "w");
    if (targetFile == NULL)
    {
        printf("Error opening target file.\n");
        fclose(sourceFile);
        return 1;
    }

    char ch;
    while ((ch = fgetc(sourceFile)) != EOF)
    {
        if (ch != charToDelete)
        {
            fputc(ch, targetFile);
        }
    }

    fclose(sourceFile);
    fclose(targetFile);

    printf("\nFile contents copied successfully with '%c' deleted!\n\n", charToDelete);

    return 0;
}
