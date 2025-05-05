/*sort to unsorted array and merge them in ascending order[9.14]*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

void sortArray1(vector<ll> &arr1)
{
    sort(arr1.begin(), arr1.end());
    cout << "Sorted Array1: ";
    for (auto &x : arr1)
    {
        cout << x << " ";
    }
    cout << nl;
}

void sortArray2(vector<ll> &arr2)
{
    sort(arr2.begin(), arr2.end());
    cout << "Sorted Array2: ";
    for (auto &y : arr2)
    {
        cout << y << " ";
    }
    cout << nl;
}

void mergeArray(ll n1, vector<ll> &arr1, ll n2, vector<ll> &arr2, vector<ll> &merge)
{
    ll i, j, k;
    for (i = 0, j = 0, k = 0; i < n1 && j < n2; k++)
    {
        if (arr1[i] < arr2[j])
        {
            merge[k] = arr1[i];
            i++;
        }
        else
        {
            merge[k] = arr2[j];
            j++;
        }
    }
    while (i < n1)
    {
        merge[k] = arr1[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        merge[k] = arr2[j];
        k++;
        j++;
    }

    cout << "Merge array in Ascending Order: ";
    for (i = 0; i < (n1 + n2); i++)
    {
        cout << merge[i] << " ";
    }
    cout << nl;
}

int main()
{
    cout << "Enter the first array size: ";
    ll n1;
    cin >> n1;
    vector<ll> arr1(n1);
    cout << "Enter the first array element: ";
    ll i;
    for (i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter the second array size: ";
    ll n2;
    cin >> n2;
    vector<ll> arr2(n2);
    cout << "Enter the second array element: ";
    for (i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }

    sortArray1(arr1);
    sortArray2(arr2);

    vector<ll> merge(n1 + n2);
    mergeArray(n1, arr1, n2, arr2, merge);

    return 0;
}
