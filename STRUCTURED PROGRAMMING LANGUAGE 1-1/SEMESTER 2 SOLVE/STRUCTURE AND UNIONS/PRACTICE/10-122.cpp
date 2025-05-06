#include <bits\stdc++.h>
using namespace std;

#define ll long long
#define nl endl

struct census
{
    string city;
    ll population;
    float literacy;
};

// Comparison functions for sorting
auto compareCity(census &a, census &b)
{
    return a.city < b.city;
}

auto compareLiteracy(census &a, census &b)
{
    return a.literacy < b.literacy;
}

auto comparePopulation(census &a, census &b)
{
    return a.population < b.population;
}

// Display function to print sorted list
void displaySorted(vector<census> &sortedList)
{
    for (auto &c : sortedList)
    {
        cout << c.city << "\t| Population: " << c.population << "\t| Literacy: " << fixed << setprecision(2) << c.literacy << nl << nl;
    }
}

int main()
{
    ll n = 2;

    vector<census> C(n);

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
    vector<census> sortedByCity = C;
    sort(sortedByCity.begin(), sortedByCity.end(), compareCity);
    cout << "\n\nSorted Based on City Name\n\n";
    displaySorted(sortedByCity);

    // Sorting based on literacy level
    vector<census> sortedByLiteracy = C;
    sort(sortedByLiteracy.begin(), sortedByLiteracy.end(), compareLiteracy);
    cout << "\n\nSorted Based on Literacy Level\n\n";
    displaySorted(sortedByLiteracy);

    // Sorting based on population
    vector<census> sortedByPopulation = C;
    sort(sortedByPopulation.begin(), sortedByPopulation.end(), comparePopulation);
    cout << "\n\nSorted Based on Population\n\n";
    displaySorted(sortedByPopulation);

    return 0;
}
