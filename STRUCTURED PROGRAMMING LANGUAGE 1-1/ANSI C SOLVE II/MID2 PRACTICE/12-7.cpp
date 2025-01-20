#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int main()
{
    ll offset;
    cin >> offset;
    FILE *file = fopen("a.txt", "r");
    if (file == NULL)
    {
        cout << "Error opening file\n";
        return 1;
    }

    char lines[1000][1000];
    ll line_count = 0, i;

    while (fgets(lines[line_count], sizeof(lines[line_count]), file) != NULL)
    {
        line_count++;
    }

    if (offset > 0)
    {
        for (i = offset; i < line_count; i++)
        {
            cout << lines[i] << nl;
        }
    }
    else if (offset < 0)
    {
        ll start_index = line_count + offset;
        if (start_index < 0)
        {
            cout << "Eror!\n";
            return 1;
        }
        else
        {
            for (i = start_index; i < line_count; i++)
            {
                cout << lines[i] << nl;
            }
        }
    }
    else
    {
        cout << "Error\n";
    }

    fclose(file);

    return 0;
}