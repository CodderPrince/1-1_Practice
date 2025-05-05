#include <iostream>
#include <vector>
#include <numeric> // For accumulate function
using namespace std;

#define ll long long
#define nl endl

bool func(int i, int sum, vector<int>& nums)
{
    // Base cases
    if (sum == 0)
    {
        return true;
    }
    if (i < 0 || sum < 0) // Modified condition to check if sum < 0
    {
        return false;
    }

    // Not considering ith index
    bool isPossible = func(i - 1, sum, nums);

    // Considering ith index
    isPossible |= func(i - 1, sum - nums[i], nums);
    return isPossible;
}

bool canPartition(vector<int>& nums)
{
    int sum = accumulate(nums.begin(), nums.end(), 0);

    if (sum % 2 != 0)
    {
        return false;
    }

    sum = sum / 2;

    return func(nums.size() - 1, sum, nums);
}

int main()
{
    vector<int> nums = {7, 3, 1, 5, 4, 8};
    if (canPartition(nums))
    {
        cout << "Set can be partitioned\n";
    }
    else
    {
        cout << "Set cannot be partitioned\n";
    }

    return 0;
}
