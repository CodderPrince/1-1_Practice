#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

struct census
{
    string city;
    ll population;
    float literacy;
};

// Comparison function for sorting by city name
auto compareCity(const census &a, const census &b)
{
    return a.city < b.city;
}

int main()
{
    ll n = 3;

    struct census C[n];
    for (int i = 0; i < n; i++)
    {
        cout << "\n**Enter the city details " << i + 1 << "**\n";
        cout << "Enter the city name: ";
        cin >> C[i].city;
        cout << "Enter the population: ";
        cin >> C[i].population;
        cout << "Enter the literacy level: ";
        cin >> C[i].literacy;
    }

    // Sorting based on city name
    sort(C, C + n, compareCity); // introsort
    // combines QuickSort, HeapSort, and InsertionSort.

    //  Display sorted data
    cout << "\n\nSorted by city name:\n";
    for (int i = 0; i < n; i++)
    {
        cout << C[i].city << " | Population: " << C[i].population << " | Literacy: " << C[i].literacy << nl<<nl;
    }

    return 0;
}
