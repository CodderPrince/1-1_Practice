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

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int main()
{
    FILE *file1 = fopen("source.txt", "a");
    FILE *file2 = fopen("dest.txt", "r");
    if (file1 == NULL || file2 == NULL)
    {
        cout << "\nError opening files!\n\n";
        return 1;
    }

    char ch;
    while ((ch = fgetc(file2)) != EOF)
    {
        fputc(ch, file1);
    }

    cout << "\nFile appended successfully!\n\n";
    fclose(file1);
    fclose(file2);

    return 0;
}