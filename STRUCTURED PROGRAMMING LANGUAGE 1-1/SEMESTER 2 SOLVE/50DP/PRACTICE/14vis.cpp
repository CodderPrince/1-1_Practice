#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int mat(vector<int> const &arr, int l, int r)
{
    //when there is only two matrix then it's not possible to multiplicate other's mat
    //a = 10 x 5 then not's possible to multiplicate with other's so return 0
    if (l == r)
    {
        return 0;
    }

    /*
    when base case is not true then there is at least minCost here
    so by default set that minimum cost is high and compare that minCost
    */
    int minCost = INT_MAX;
    // cout<<INT_MAX<<endl;
    
    for (int k = l; k < r; k++)
    {
        int cost = mat(arr, l, k);
        // this fucntion partion every single matrix
        // A(BC) partition A from other 1st
        //(AB)C partition C from other 2nd
        // cout<<"1st cost: "<<cost<<endl;
        cost = cost + mat(arr, k + 1, r);
        // this function store operation number of: BC=9000
        // this function store operation number of: AB=1500
        //cout << "2nd cost: " << cost << endl;
        cost = cost + arr[l - 1] * arr[k] * arr[r];
        // this function calculate
        // BC + A * (BC) = 9000 + 18000 = 27000
        // AB + AB * C = 1500 + 3000 = 4500
       // cout << "3rd cost: " << cost << endl;
        minCost = min(minCost, cost);
    }

    return minCost;
}

signed main()
{
    //vector<int> arr = {10, 30, 5, 60};
    vector<int> arr = {10, 30};
    int n = arr.size();

    cout << "The minimum cost is: " << mat(arr, 1, n - 1);

    return 0;
}

/*
condition 1: multiplication matrix 1 [m][n] and matrix 2 [x][y]
n=x
1st matrix coloumn and 2nd matrix row

find matrix operation shortcut: m * n * y
*/