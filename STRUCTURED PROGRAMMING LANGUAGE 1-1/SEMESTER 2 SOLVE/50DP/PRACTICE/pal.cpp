#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int main()
{
    char s[100] = "aba";
    char p[100];

    // strcpy(p,s);
    // convert this by function
    int j = 0, cnt = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        p[j] = s[i];
        j++;
        cnt++;
    }
    p[j] = '\0';

    // strrev(p);
    // convert this by function
    int k = 0, x[100];
    for (int i = cnt - 1; i >= 0; i--)
    {
        x[k] = p[i];
        k++;
    }
    x[k] = '\0';

    /*if (strcmp(p, s) == 0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }*/
    // convert this function by programmer function

    int flag = 1, m = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {

        if (s[i] != x[i])
        {
            flag = 0;
            break;
        }
    }

    if (flag)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}