#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long int fact=1,i;
        for(i=1; i<=n; i++)
        {
            fact= fact*i;
        }
        cout<<fact<<endl;
    }
    return 0;

}