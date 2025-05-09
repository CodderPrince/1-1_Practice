#include<stdio.h>

int main() 
{
    int t, n, i, sum[101]={0}, total_sum;
    scanf("%d", &t);
    while(t--) 
    {
        //sum = 0;
        scanf("%d", &n);
        total_sum = (n*(n+1))/2; // sum of first n natural numbers
        for(i=0; i<(n-1); i++) 
        {
            scanf("%d", &sum[i]);//scan every array element
            total_sum = total_sum - sum[i]; // subtracting each element from the sum
        }
        printf("%d\n", total_sum); // the remaining number is the missing element
    }
    return 0;
}