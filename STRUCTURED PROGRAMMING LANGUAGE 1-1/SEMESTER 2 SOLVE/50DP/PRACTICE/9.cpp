#include <bits/stdc++.h>
using namespace std;

// Function to find the length of the longest increasing subsequence
int LIS(int arr[], int n)
{
    vector<int> dp(n, 1);

    for (int i = 1; i < n; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            if (arr[i] > arr[j] && dp[i] < dp[j] + 1)
            {
                dp[i] = dp[j] + 1;
            }
        }
    }
    /*for(auto &x: dp)
    {
        cout<<x<<" ";
    }
    cout<<endl;*/

    return *max_element(dp.begin(), dp.end());
}

int main()
{
    int arr[] = {1,4,3,5,6};

     //cout<<arr.size()<<endl;
    int n = 5;
    //cout<<n<<endl;
    cout << "The length of the LIS is: " << LIS(arr, n);

    return 0;
}
