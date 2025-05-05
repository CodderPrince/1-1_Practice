/*old 11.10 new 12.10 [PRINCE]
Write a function (using pointer parameters) that compares two integer arrays
to see whether they are identical. The function returns 1 if they are identical,
0 otherwise.
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

ll check(ll *arr1, ll *arr2, ll n)
{
    ll i, j;
    for (i = 0; i < n; i++)
    {
        if (arr1[i] != arr2[i])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    ll n;
    cout << "\nEnter the array size: ";
    cin >> n;
    ll arr1[n];
    cout << "Enter the first array elements: ";
    for (ll i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    ll arr2[n];
    cout << "Enter the second array elements: ";
    for (ll i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }

    ll res = check(arr1, arr2, n);

    if (res)
    {
        cout << "Array are identical!\n\n";
    }
    else
    {
        cout << "Array are not identical!\n\n";
    }

    return 0;
}