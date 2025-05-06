/*  old 11.1 new 12.1 [PRINCE]
    Write a program using pointers to read in an array of integers and
    print its elements in reverse order.
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

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

    cout << "Array sorted in reverse order: ";
    for (ll i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << nl << nl;

    delete[] arr;

    return 0;
}