#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r1,r2,upb,pb;
        double crr,rrr;
        cin>>r1>>r2>>upb;
        pb= 300-upb;
        crr= r2/(pb/6.0);
        if(r1<r2)
        {
            rrr= 0.00;
        }
        else
        {
            rrr= (r1-r2+1)/(upb/6.0);
        }
        cout<<fixed;
        cout<<setprecision(2);
        cout<<crr<<" "<<rrr<<" "<<endl;
    }
    return 0;
}