#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int main()
{
    FILE *file1 = fopen("d.txt", "r");
    FILE *file2 = fopen("s.txt", "a");

    if (file1 == NULL || file2 == NULL)
    {
        cout << "Error opening files\n";
        return 1;
    }

    char ch;
    while ((ch = fgetc(file1)) != EOF)
    {
        fputc(ch, file2);
    }

    cout << "File append successfully!\n";

    fclose(file1);
    fclose(file2);

    return 0;
}