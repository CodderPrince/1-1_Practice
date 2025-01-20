#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

const ll ROW = 2;
const ll COL = 3;
ll mat1[ROW][COL] = {{1, 2, 3}, {4, 5, 6}};
ll mat2[ROW][COL] = {{6, 7, 4}, {7, 4, 2}};
ll addMatrix[ROW][COL];

ll addMat(ll *mat1, ll *mat2)
{
    ll i, j;
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            addMatrix[i][j] = *(mat1 + i * COL + j) + *(mat2 + i * COL + j);
        }
    }
}
int main()
{

    ll i, j;
    addMat(*mat1, *mat2);
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            cout << setw(5) << addMatrix[i][j];
        }
        cout<<nl;
    }
    cout<<nl;
    
    return 0;
}