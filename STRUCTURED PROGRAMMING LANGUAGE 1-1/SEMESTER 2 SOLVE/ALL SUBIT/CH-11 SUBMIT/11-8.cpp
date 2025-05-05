/*old 11.8 new 12.8 [PRINCE]
Given an array of sorted list of using the method of binary integer numbers,
write a function to search for a particular item, search.
And also show how this function may be used in a program.
with the array's middle element. Since the values greater than the middle
Use pointers and pointer arithmetic. (Hint: In binary search,
the target value is compared table is sorted, if the required value is smaller,
we know that all element can be ignored. That is, in one attempt,
we eliminate one half the list. This search can be applied recursively
till the target value is found.)
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

ll *binarySearch(ll arr[], ll n, ll target)
{
    ll *left = arr;
    ll *right = arr + n - 1;

    while (left <= right)
    {
        ll *mid = left + (right - left) / 2;

        if (*mid == target)
        {
            return mid;
        }
        else if (*mid < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return NULL;
}

int main()
{
    ll n;
    cout << "\nEnter the array size: ";
    cin >> n;
    ll arr[n];
    ll i;
    cout << "Enter the array elements: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll target;
    cout << "Enter the value you want to search: ";
    cin >> target;

    ll *result = binarySearch(arr, n, target);

    if (result != NULL)
    {
        cout << "Value found at index: " << result - arr << nl << nl;
    }
    else
    {
        cout << "Value not found!\n\n";
    }
    return 0;
}