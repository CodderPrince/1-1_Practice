#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int main()
{
    FILE *file = fopen("integers.txt", "r");

    if (file == NULL)
    {
        cout << "Error opening file\n";
        return 1;
    }

    ll num, sum = 0, result;
    while ((result = fscanf(file, "%d", &num)) != EOF)
    {
        if (result == 1)
        {
            sum += num;
        }
        else
        {
            fscanf(file, "%*s");
        }
    }

    fclose(file);
    file = fopen("integers.txt", "a");
    fprintf(file, "Sum : %d\n", sum);
    fclose(file);
    cout << "Sum append Successfully\n";

    return 0;
}