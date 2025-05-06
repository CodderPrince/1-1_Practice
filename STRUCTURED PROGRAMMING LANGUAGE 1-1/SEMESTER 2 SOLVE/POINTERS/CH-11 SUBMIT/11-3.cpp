/*old 11.3 new 12.3 [PRINCE]
Write a function that receives a sorted array of integers and an integer value, and inserts the
value in its correct place.
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

void insertV(ll arr[], ll n, ll val)
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

    cout << "After inserting value: ";
    for (i = 0; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << nl << nl;
}
int main()
{
    ll n;
    cout << "\nEnter the array size: ";
    cin >> n;
    ll arr[n];
    cout << "Enter the array elements: ";
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll val;
    cout << "Enter the value you insert: ";
    cin >> val;
    insertV(arr, n, val);

    return 0;
}