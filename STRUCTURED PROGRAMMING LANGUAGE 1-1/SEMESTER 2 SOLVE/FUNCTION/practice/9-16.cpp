// input a string then input a character you want to find [subeen-14]

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int find(char ch, string str)
{
    ll i;
    for (i = 0; i < str.size(); i++)
    {
        if (str[i] == ch)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    cout << "Given the string: ";
    string str;
    getline(cin, str);
    cout << "Given the character you want to find: ";
    char ch;
    cin >> ch;
    ll res = find(ch, str);
    if (res)
    {
        cout << "Character found on the string!\n";
    }
    else
    {
        cout << "Character not found on the string!\n";
    }

    return 0;
}