#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"

int f(char *p)
{
    char *q = p;
    cout << "*q: " << *q << nl;
    cout << "q: " << q << nl;
    int cnt = 0;
    cout << "p: " << p << nl;
    while (*++p)
        cout << *p << nl;
    cnt++;
    cout << "CNT: " << cnt << nl;
    ;
     cout << "p: " << p << nl;
    return (p - q);
}
int main()
{
    char str[] = "ANSI";
    printf("%d", f(str));

    return 0;
}