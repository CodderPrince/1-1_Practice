#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

const ll row1 = 2;
const ll col1 = 3;
const ll row2 = 3;
const ll col2 = 2;

ll mat1[row1][col1] =
    {
        {1, 2, 3},
        {4, 5, 6}};
ll mat2[row2][col2] =
    {
        {1, 2},
        {4, 5},
        {8, 9}};
ll mat[row1][col2];

void addMat[ll *mat1, ll *mat2]
{
    ll i, j, k;
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col2; j++)
        {
            mat[i][j] = 0;
            for (k = 0; k < col1; k++)
            {
                mat[i][j] += *(mat1 + i * col1 + k) * *(mat2 + k * col2 + j)
            }
        }
    }
}

int main()
{
    ll addMat(mat1, mat2);
    ll i, j;
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col2; j++)
        {
            cout << setw(5) << mat[i][j];
        }
        cout << nl;
    }
    cout << nl;

    return 0;
}