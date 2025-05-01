#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        int len, count=1;
        char str[100005];
        gets(str);
        len=strlen(str);
        for(int i=0; i<len; i++)
        {
            if(str[i]==' ' && str[i+1]!=' ')
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
 return 0;

}