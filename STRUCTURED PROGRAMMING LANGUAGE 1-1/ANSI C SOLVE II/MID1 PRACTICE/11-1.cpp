/*  old 11.1 new 12.1 [PRINCE]
    Write a program using pointers to read in an array of integers and
    print its elements in reverse order.
*/
#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define nl endl

int main()
{
    ll n;
    cout << "Enter the array size: ";
    cin >> n;
    vector<ll> arr(n);
    cout << "Enter the array elements: ";
    for (auto &x : arr)
    {
        cin >> x;
    }
    sort(arr.rbegin(), arr.rend());
    cout << "After reverse order: ";
    for (auto &x : arr)
    {
        cout << x << " ";
    }
    cout << nl;
}