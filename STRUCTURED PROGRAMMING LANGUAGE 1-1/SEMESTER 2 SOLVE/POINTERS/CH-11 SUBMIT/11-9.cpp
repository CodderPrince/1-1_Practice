/*  old 11.9 new 12.9 [PRINCE]
    Write a function (using a pointer parameter)
    that reverses the elements of a given array
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

void rev(ll *arr, ll n)
{
    cout << "Array sorted in reverse order: ";
    for (ll i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << nl << nl;

    delete[] arr;
}

int main()
{
    ll n;
    cout << "\nEnter the size of array: ";
    cin >> n;

    ll *arr = (ll *)calloc(n, sizeof(ll));

    cout << "Enter the array elements: ";
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    rev(arr, n);

    return 0;
}