/*old 11.4 new 12.4 [PRINCE]
Write a function using pointers to add two matrices and
to return the resultant matrix to the calling function.
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

const ll row = 2;
const ll col = 3;

ll mat1[row][col] =
    {
        {1, 2, 3},
        {4, 5, 6}};
ll mat2[row][col] =
    {
        {3, 4, 5},
        {7, 2, 9}};

ll addMat[row][col];

void addMatrix(ll *mat1, ll *mat2)
{
    ll i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            addMat[i][j] = *(mat1 + i * col + j) + *(mat2 + i * col + j);
        }
    }
}
int main()
{
    addMatrix(*mat1, *mat2);
    cout << "After adding two matrix:\n";
    ll i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << setw(5) << addMat[i][j];
        }
        cout << nl;
    }
    cout << nl << nl;

    return 0;
}