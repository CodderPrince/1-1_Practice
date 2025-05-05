#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

bool subsetSum(vector<int> const &nums, int n, int sum)
{
   //base case
   if (sum == 0)
   {
      return true;
   }
   if (n < 0 || sum < 0)
   {
      return false;
   }

   bool include = subsetSum(nums, n - 1, sum - nums[n]);

   if (include)
   {
      return true;
   }
   bool exclude = subsetSum(nums, n - 1, sum);

   return exclude;
}

bool partition(vector<int> const &nums)
{
   int sum = accumulate(nums.begin(), nums.end(), 0);

   return !(sum & 1) && subsetSum(nums, nums.size() - 1, sum / 2);
}

int main()
{
   vector<int> nums = {7, 3, 1, 5, 4, 8};
   if (partition(nums))
   {
      cout << "Set can be partitioned\n";
   }
   else
   {
      cout << "Set cannnot be partitioned\n";
   }

   return 0;
}