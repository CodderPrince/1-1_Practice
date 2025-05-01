#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int x,n;
    cin>>n;
    x= sqrt(n);
    if(x*x==n)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
    return 0;

}
