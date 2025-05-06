// convert lowercase to uppercase

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

void convert(string x)
{
    for (ll i = 0; i < x.size(); i++)
    {
        if (x[i] >= 'a' && x[i] <= 'z')
        {
            x[i] -= 32;
        }
        else if (x[i] >= 'A' && x[i] <= 'Z')
        {
            x[i] = x[i];
        }
    }
    cout << x << nl;
}
int main()
{
    cout << "Given a lowercase string: ";
    string str;
    getline(cin, str);
    convert(str);

    return 0;
}