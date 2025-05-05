#include <iostream>
#include <vector>
using namespace std;

int calculateLBS(const vector<int> &nums)
{
    int n = nums.size();
    if (n == 0)
    {
        return 0;
    }
    //int arr[4];
    //for(int )
    vector<int> Increase(n, 1); // Length of the longest increasing subsequence ending at nums[i]
    vector<int> Decrease(n, 1); // Length of the longest decreasing subsequence starting with nums[i]

    // Calculate the longest increasing subsequence
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (nums[i] > nums[j] && Increase[i] < Increase[j] + 1)
            {
                Increase[i] = Increase[j] + 1;
            }
        }
    }
    for (auto &x : Increase)
    {
        cout << x << " ";
    }
    cout << endl;

    // Calculate the longest decreasing subsequence
    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = n - 1; j > i; j--)
        {
            if (nums[i] > nums[j] && (Decrease[i] < Decrease[j] + 1))
            {
                Decrease[i] = Decrease[j] + 1;
            }
        }
    }
    for (auto &x : Decrease)
    {
        cout << x << " ";
    }
    cout << endl;

    // Find the maximum length of the bitonic subsequence
    int lbs = 1;
    for (int i = 0; i < n; i++)
    {
        lbs = max(lbs, Increase[i] + Decrease[i] - 1);
    }
    //both increase and decrease array have a common element
    //so substract the common element manually
    /*

    */

    return lbs;
}

int main()
{
    vector<int> nums = {4, 2, 9, 7, 6};

    cout << "The length of the longest bitonic subsequence is: " << calculateLBS(nums);

    return 0;
}