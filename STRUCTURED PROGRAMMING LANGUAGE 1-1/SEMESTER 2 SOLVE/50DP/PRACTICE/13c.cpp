#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"

vector<vector<int>> mat =
   {
    {1,1,1},
    {1,1,0},
    {1,1,0},
   };
int find()
{
    ll m = mat.size();

    //base case if mat is null
    if(m==0)
    {
        return 0;
    }
    ll n = mat[0].size();

    vector<vector<int>>dp(m,vector<int>(n,1));

    int i,j;
    for(i=0;i<m; i++)
    {
        dp[i][0]=mat[i][0];
    }
    for(j=0;j<n;j++)
    {
        dp[0][j]=mat[0][j];
    }

    for(i=1;i<m;i++)
    {
        for(j=1;j<n;j++)
        {
            if(mat[i][j]==1)
            {
                
            }
        }
    }
}

int main()
{
   
   find();

return 0;
}