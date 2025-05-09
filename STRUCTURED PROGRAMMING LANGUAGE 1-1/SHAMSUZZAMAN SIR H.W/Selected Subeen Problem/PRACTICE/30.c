#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int n,i;
    scanf("%d",&n);
    long long int a[7]={6,28,496,8128,33550336,8589869056,2305843008139952128};
    //int s=1;
    for(i=0;i<7;i++){
    if(a[i]==n){
    printf("YES, %d is a perfect number!\n",n);
    //s=1;
    //break;
    }
    else
    {
    printf("NO, %d is not a perfect number!\n",n);
        break;
    }
    }
    }
    return 0;
}
