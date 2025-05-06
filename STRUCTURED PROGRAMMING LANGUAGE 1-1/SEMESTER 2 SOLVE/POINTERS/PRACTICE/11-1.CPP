#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int main()
{
    ll n;
   cin>>n;
   vector<ll>arr(n);
   for(int i=0; i<n; i++)
   {
    cin>>arr[i];
   }
   reverse(arr.begin(),arr.end());
   for(auto &x: arr)
   {
    cout<<x<<" ";
   }
   cout<<nl;

return 0;
}