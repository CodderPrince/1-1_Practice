#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

ll wt[]={3,4,5}, price[]={30,50,60};

ll knapsack(int w, int n)
{
    // base case
    if (w == 0 || n == 0)
    {
        return 0;
    }

    // If the weight of the current item exceeds the remaining capacity,
    // move to the next item without choosing the current one
    if (wt[n-1] <= w)
    {
        ll a = price[n-1]+knapsack(w-wt[n-1],n-1);
        //cout<<"a : "<<a<<endl;
        ll b = knapsack(w,n-1);
         cout<<"b : "<<b<<endl;
        return max(a,b);
        //return max(price[n-1]+knapsack(w-wt[n-1],n-1),knapsack(w,n-1));
    }

    else
    {
        return knapsack(w,n-1);
    }
    //return ans;
}

int main()
{
    int n=3, w=8;
    

    // start last nex to first nex
    cout << knapsack(w,n) << nl;

    return 0;
}
