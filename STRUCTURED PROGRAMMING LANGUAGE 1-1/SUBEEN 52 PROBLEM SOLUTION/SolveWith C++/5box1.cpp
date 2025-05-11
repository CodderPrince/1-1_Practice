#include<iostream>
using namespace std;
int main()

{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        int row,col;
        int n;
        cin>>n;
        for(row=1; row<=n; row++)
        {
            for(col=1; col<=n; col++)
            {
                printf("*");
            }
            printf("\n");
        }
        if(t!=i)
        {
            printf("\n");
        }

    }
 return 0;

}