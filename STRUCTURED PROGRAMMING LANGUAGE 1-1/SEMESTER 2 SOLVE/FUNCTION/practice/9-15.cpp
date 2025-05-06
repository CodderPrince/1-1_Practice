#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

void add(string str1, string str4)
{
    ll i;
    for (i = 0; i < str4.size(); i++)
    {
        str1 += str4[i];
    }
    cout << "Concatenated string: " << str1 << nl;
}
void copy(string &str1, string &str3)
{
    // str3.clear(); // Clear the destination string

    int i = 0;
    while (i < str1.size())
    {
        str3.push_back(str1[i]);
        i++;
    }

    cout << "Copied string: " << str3 << nl;
}

// str3=str1; most easiest way using in build function

void compare(string str1, string str2)
{
    ll i = 0;
    ll j = 0;
    ll cnt = 1;
    for (i = 0, j = 0; i < str1.size() && j < str2.size(); i++, j++)
    {
        if (str1[i] != str2[j])
        {
            cnt = 0;
            break;
        }
    }
    if (cnt == 1)
    {
        cout << "Both are equal!\n";
    }
    else
    {
        cout << "Not equal!\n";
    }
}

int main()
{
    cout << "Enter the first string: ";
    string str1;
    getline(cin, str1);
    cout << "Enter the second string: ";
    string str2;
    getline(cin, str2);

    string str3;
    copy(str1, str3);
    compare(str1, str2);

    cout << "Enter the string you want to add first string: ";
    string str4;
    getline(cin, str4);
    add(str1, str4);

    return 0;
}