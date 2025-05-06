// input [m][n] matrix and find the largest value
// let a maximum coloumn size and not initialize row size

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

const ll MAX_ROWS = 100;
const ll MAX_COL = 100;
ll mat[MAX_ROWS][MAX_COL];

void large(ll row, ll col)
{
    ll max = mat[0][0];
    ll i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (max < mat[i][j])
            {
                max = mat[i][j];
            }
        }
    }
    cout << "Largest element of matrix: " << max << nl;
}

int main()
{
    cout << "Enter the row size: ";
    ll row;
    cin >> row;
    cout << "Enter the column size :";
    ll col;
    cin >> col;
    ll i;
    cout << "Enter the matrix elements: ";
    for (i = 0; i < row; i++)
    {
        for (ll j = 0; j < col; j++)
        {
            cin >> mat[i][j];
        }
    }
    large(row, col);

    return 0;
}