#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int main()
{
    char ch;
    cin >> ch;
    FILE *file1 = fopen("s6.txt", "r");
    if (file1 == NULL)
    {
        cout << "Error opening file\n";
        return 1;
    }

    FILE *file2 = fopen("d6.txt", "w");
    if (file2 == NULL)
    {
        cout << "Error opening file\n";
        return 1;
    }

    char c;
    while ((c = fgetc(file1)) != EOF)
    {
        if (c != ch)
        {
            fputc(c, file2);
        }
    }
    cout << "File work perfectly\n";

    fclose(file1);
    fclose(file2);

    return 0;
}