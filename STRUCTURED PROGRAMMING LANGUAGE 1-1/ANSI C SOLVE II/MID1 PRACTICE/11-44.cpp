// add two matrix using pointers

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

const ll row = 2;
const ll col = 3;
ll mat1[row][col] = {{1, 2, 3}, {4, 5, 6}};
ll mat2[row][col] = {{13, 2, 32}, {41, 5, 63}};
ll mat[row][col];

void addMat(ll *mat1, ll *mat2)
{
    ll i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            mat[i][j] = *(mat1 + i * col + j) + *(mat2 + i * col + j);
        }
    }
}

int main()
{
    addMat(*mat1, *mat2);
    ll i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << setw(5) << mat[i][j];
        }
        cout << nl;
    }
    cout << nl;

    return 0;
}