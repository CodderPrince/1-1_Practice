// read two unsorted array, sort them and merge two array

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

void sortArray1(vector<ll> &arr1)
{
    sort(arr1.begin(), arr1.end());
}

void sortArray2(vector<ll> &arr2)
{
    sort(arr2.begin(), arr2.end());
}

void merge(ll n1, vector<ll> &arr1, ll n2, vector<ll> &arr2, vector<ll> &mergeArray)

{
    ll i, j, k;
    for (i = 0, j = 0, k = 0; i < n1 && j < n2; k++)
    {
        if (arr1[i] < arr2[j])
        {
            mergeArray[k] = arr1[i];
            i++;
        }
        else
        {
            mergeArray[k] = arr2[j];
            j++;
        }
    }
    while (i < n1)
    {
        mergeArray[k] = arr1[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        mergeArray[k] = arr2[j];
        k++;
        j++;
    }
    cout << "Merge array: ";
    for (i = 0; i < (n1 + n2); i++)
    {
        cout << mergeArray[i] << " ";
    }
    cout << nl;
}
int main()
{
    ll n1;
    cout << "Enter the first array size: ";
    cin >> n1;
    vector<ll> arr1(n1);
    ll i;
    cout << "Enter the first array element: ";
    for (i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }
    ll n2;
    cout << "Enter the second array size: ";
    cin >> n2;
    vector<ll> arr2(n2);
    cout << "Enter the second array element: ";
    for (i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }
    sortArray1(arr1);
    cout << "Sorted array1: ";
    for (auto &x : arr1)
    {
        cout << x << " ";
    }
    cout << nl;
    sortArray2(arr2);
    cout << "Sorted array2: ";
    for (auto &y : arr2)
    {
        cout << y << " ";
    }
    cout << nl;

    vector<ll> mergeArray(n1 + n2);
    merge(n1, arr1, n2, arr2, mergeArray);
    return 0;
}