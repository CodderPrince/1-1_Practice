#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int distance(string x, int m, string y, int n)
{
  // base case
  if (m == 0)
  {
    return n;
  }
  // if first string is null then total operation = 2nd str len

  // alternavely

  if (n == 0)
  {
    return m;
  }

  int operation;
  if (x[m - 1] == y[n - 1])
  {
    operation = 0;
  }
  else
  {
    operation = 1;
  }

  return min(min(distance(x, m, y, n - 1) + 1,
                 distance(x, m - 1, y, n) + 1),
             distance(x, m - 1, y, n - 1) + operation);
}

int main()
{
  string x = "ab", y = "cb";
  cout << "Minimum operation needed: " << distance(x, x.length(), y, y.length()) << nl;

  return 0;
}