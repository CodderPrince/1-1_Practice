/*
**Write a program to do the following**
• To read details for 5 cities randomly using an array variable
• To sort the list alphabetically
• To sort the list based on literacy level
• To sort the list based on population
• To display sorted lists
*/

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

auto CompCity(census &a, census &b)
{
    return a.city < b.city;
}

auto ComP(census &a, census &b)
{
    return a.population < b.population;
}

auto CompL(census &a, census &b)
{
    return a.literacy < b.literacy;
}

void displayS(vector<census> &x)
{
    for (auto &dis : x)
    {
        cout << "Name: " << dis.city << "\t\t| Population: " << dis.population << "\t\t| Literacy: " << fixed << setprecision(2) << dis.literacy << nl << nl;
    }
}

int main()
{
    ll n = 3;
    vector<census> C(n);

    for (int i = 0; i < n; i++)
    {
        cout << "\n**Enter the city details**\n";
        cout << "Enter the city name: ";
        cin >> C[i].city;
        cout << "Enter the population: ";
        cin >> C[i].population;
        cout << "Enter the literacy level: ";
        cin >> C[i].literacy;
    }

    vector<census> sortC = C;
    sort(sortC.begin(), sortC.end(), CompCity);
    cout << "\n**Sorted by City Name**\n";
    displayS(sortC);

    vector<census> sortP = C;
    sort(sortP.begin(), sortP.end(), ComP);
    cout << "\n**Sorted by Population**\n";
    displayS(sortP);

    vector<census> sortL = C;
    sort(sortL.begin(), sortL.end(), CompL);
    cout << "\n**Sorted by Literacy**\n";
    displayS(sortL);

    return 0;
}