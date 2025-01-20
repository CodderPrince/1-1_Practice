/*  PRINCE[12105007]
    Problem number: 12.4
    Write a program that appends one file at the end of another.
    Firstly create source and destination file.txt format
    Then access the file.txt mode

    Testcase:   source.txt              dest.txt
                What is your name?      Name: Md. An Nahin Prince
                What is your ID?        ID: 12105007
                
                output: What is your name?
                        What is your ID?
                        Name: Md. An Nahin Prince
                        
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char sourceFileName[100];
    char destinationFileName[100];

    printf("\nEnter the name of the source file: ");
    scanf("%s", sourceFileName);

    printf("Enter the name of the destination file: ");
    scanf("%s", destinationFileName);

    FILE *destinationFile = fopen(destinationFileName, "r");
    FILE *sourceFile = fopen(sourceFileName, "a");

    if (sourceFile == NULL || destinationFile == NULL)
    {
        printf("Error opening files.\n");
        return 1;
    }

    char ch;
    while ((ch = fgetc(destinationFile)) != EOF)
    {
        fputc(ch, sourceFile);
    }

    printf("File appended successfully.\n\n");

    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}