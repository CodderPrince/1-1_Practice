#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

struct Census
{
    string name;
    ll population;
    float literacy;
};

auto compareCity(Census &a, Census &b)
{
    return a.name < b.name;
}

auto comparePop(Census &a, Census &b)
{
    return a.population < b.population;
}

auto compareLit(Census &a, Census &b)
{
    return a.literacy < b.literacy;
}

auto display(vector<Census> &x)
{
    for (auto &dis : x)
    {
        cout << "Name: " << dis.name << "\t\t"
             << "Population: " << dis.population << "\t\t"
             << "Literacy: " << fixed << setprecision(2) << dis.literacy;
        cout << nl << nl;
    }
}

int main()
{
    ll n = 3;
    vector<Census> census(n);
    for (int i = 0; i < n; i++)
    {
        cout << "\n**Enter city details: " << i + 1 << "**\n";
        cout << "Enter city name: ";
        cin >> census[i].name;
        cout << "Enter population: ";
        cin >> census[i].population;
        cout << "Enter literacy: ";
        cin >> census[i].literacy;
    }

    vector<Census> sortCity = census;
    sort(sortCity.begin(), sortCity.end(), compareCity);
    cout << "\n**Sorted by City name**\n\n";
    display(sortCity);

    vector<Census> sortPop = census;
    sort(sortPop.begin(), sortPop.end(), comparePop);
    cout << "**Sorted by population**\n\n";
    display(sortPop);

    vector<Census> sortLit = census;
    sort(sortLit.begin(), sortLit.end(), compareLit);
    cout << "**Sorted by literacy**\n\n";
    display(sortLit);

    return 0;
}