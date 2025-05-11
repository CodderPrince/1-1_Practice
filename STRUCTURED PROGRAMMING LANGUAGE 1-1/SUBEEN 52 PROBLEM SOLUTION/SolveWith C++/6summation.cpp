#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int s1,s2,n,sum=0;
        cin>>n;
        s1= n%10;
        s2= n/10000;
        sum= s1+s2;
        cout<<"Sum = "<<sum<<endl;
    }
    return 0;
}