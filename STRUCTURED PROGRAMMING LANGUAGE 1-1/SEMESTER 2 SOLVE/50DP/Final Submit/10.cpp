/*
DP PROBLEM NUMBER : 10
Longest Bitonic Subsequence[LBS]
Name: PRINCE
ID: 12105007
Approach: Brute-Force
*/

#include <iostream>
using namespace std;

const int MAX_SIZE = 1000;

int Increase[MAX_SIZE];
int Decrease[MAX_SIZE];

int LBS(int nums[], int n)
{
    if (n == 0)
    {
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        Increase[i] = 1;
        Decrease[i] = 1;
    }

    // check pair by pair
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

    // reverse process of increase order right to left
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

    int Maxlength = 1;
    for (int i = 0; i < n; i++)
    {
        Maxlength = max(Maxlength, Increase[i] + Decrease[i] - 1);
    }
    return Maxlength;
}

int main()
{
    int nums[] = {4, 2, 3, 9, 7, 6};
    int n = 6;

    cout << "The longest bitonic subsequence is: " << LBS(nums, n);

    return 0;
}

/*
value:  4   2   3   9   7   6
index:  0   1   2   3   4   5

increase array:
value:  1   1   2   3   3   3
index:  0   1   2   3   4   5

decrease array:
value:  2   1   1   3   2   1
index:  0   1   2   3   4   5
*/