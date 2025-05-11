#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int count = 0; 
        int n,i;
        scanf("%d",&n);
        for(i=5; i<=n; i=i*5)
        {
            count= count+n/i;
        }
        cout<<count<<endl;
    }
    return 0;
}