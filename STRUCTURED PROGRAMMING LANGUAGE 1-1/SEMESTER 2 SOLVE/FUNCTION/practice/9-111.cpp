#include <iostream>
using namespace std;

#define ll long long
#define nl endl

void largestValue(ll m, ll n, ll matrix[][1000])
{
    ll max = matrix[0][0];
    ll i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (max < matrix[i][j])
            {
                max = matrix[i][j];
            }
        }
    }
    cout << "Max value of the matrix is: " << max << nl;
}

int main()
{
    ll m, n;
    cout << "Enter the row size: ";
    cin >> m;
    cout << "Enter the column size: ";
    cin >> n;
    ll matrix[m][1000];
    ll i, j;
    cout << "Enter the matrix elements:\n";
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    largestValue(m, n, matrix);

    return 0;
}
