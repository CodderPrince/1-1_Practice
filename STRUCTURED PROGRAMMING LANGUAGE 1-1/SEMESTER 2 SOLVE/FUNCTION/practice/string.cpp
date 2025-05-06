#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int main()
{
   string str1;
   getline(cin,str1);
   string str2;
   getline(cin,str2);
   ll equal=((str1 == str2));
   if(equal)
   {
    cout<<"Equal\n";
   }
   else
   {
    cout<<"Not";
   }

return 0;
}