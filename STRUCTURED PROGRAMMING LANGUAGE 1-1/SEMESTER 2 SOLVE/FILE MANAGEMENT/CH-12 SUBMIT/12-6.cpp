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

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int main()
{
    char sourceFile[100];
    char destFile[100];
    char del;

    cout << "\nEnter the character you want to delete: ";
    cin >> del;

    FILE *sourceF = fopen("s.txt", "r");
    if (sourceF == NULL)
    {
        cout << "Error opening file!\n\n";
        return 1;
    }

    FILE *destF = fopen("d.txt", "w");
    if (destF == NULL)
    {
        cout << "Error opening file!\n\n";
        return 1;
    }

    char ch;
    while ((ch = fgetc(sourceF)) != EOF)
    {
        if (ch != del)
        {
            fputc(ch, destF);
        }
    }

    fclose(sourceF);
    fclose(destF);

    cout << "\nOperation Successful!\n\n";

    return 0;
}