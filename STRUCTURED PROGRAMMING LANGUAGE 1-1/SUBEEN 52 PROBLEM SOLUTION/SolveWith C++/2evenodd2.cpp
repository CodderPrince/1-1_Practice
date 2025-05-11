#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int len;
        char str[101];
        cin>>str;
        len=strlen(str);
        if(str[len-1]%2 == 0)
        {
            //printf("even\n");
            cout<<"even"<<endl;
        }
        else
        {
            //printf("odd\n");
            cout<<"odd"<<endl;
        }
    }
    return 0;
}