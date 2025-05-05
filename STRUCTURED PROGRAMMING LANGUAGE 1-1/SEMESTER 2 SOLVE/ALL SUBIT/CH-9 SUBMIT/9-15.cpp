// copy one string to another and add

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

void compare(string str1, string str2)
{
    ll i, j, cnt = 1;
    for (i = 0, j = 0; i < str1.size() && str2.size(); i++, j++)
    {
        if (str1[i] != str2[j])
        {
            cnt = 0;
            break;
        }
    }
    if (cnt == 1)
    {
        cout << "Both string are equal!\n";
    }
    else
    {
        cout << "String are not equal!\n";
    }
}

void copy(string &str1, string &str3)
{
    ll i;
    for (i = 0; i < str1.size(); i++)
    {
        str3.push_back(str1[i]);
    }
    cout << "Copied string is: " << str3 << nl;
}

void add(string &str1, string &str4)
{
    ll i;
    for (i = 0; i < str4.size(); i++)
    {
        str1 += str4[i];
    }
    cout << "Concatenates string is: " << str1 << nl;
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

    cout << "Enter the string you want to add: ";
    string str4;
    getline(cin, str4);
    add(str1, str4);
    return 0;
}