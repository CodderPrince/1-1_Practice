// typedef

/*
typedef is a keyword that is used in code to 
create an existing name.
it is mainly used make your code more shorten
typedef long long int ll
here i can shorten long long int to ll
now in my progam i can use everywhere ll without
using long long int
this practice make your code more fisrtly
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"

typedef struct file
{
    int a;
    string s;
} p;

typedef int id;
int main()
{
    id Id = 12105007;
    cout << Id << nl;
    p x;
    x.a = 12105007;
    x.s = "Prince";
    cout << "ID: " << x.a << nl;
    cout << "Name: " << x.s << nl;

    return 0;
}