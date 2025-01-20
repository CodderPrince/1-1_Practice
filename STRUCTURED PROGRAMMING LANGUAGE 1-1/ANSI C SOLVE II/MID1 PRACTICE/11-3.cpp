#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

ll insertV(ll arr[], ll val, ll n)
{
    ll i, j;
    for (i = 0; i < n; i++)
    {
        if (arr[i] > val)
        {
            break;
        }
    }
    for (j = n - 1; j >= i; j--)
    {
        arr[j + 1] = arr[j];
    }
    arr[i] = val;
}

int main()
{
    ll n;
    cin >> n;
    ll *arr = (ll *)(malloc(sizeof(ll)));
    ll i;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll val;
    cin >> val;
    insertV(arr, val, n);

    for (i = 0; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << nl;

    return 0;
}