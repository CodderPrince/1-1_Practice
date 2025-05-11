#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> heights(n);
    for (int i = 0; i < n; i++)
    {
        cin >> heights[i];
    }

    int swaps = 0;
    for (int i = 0; i < n / 2; i++)
    {
        if (heights[i] < heights[n - i - 1])
        {
            swaps++;
        }
    }

    cout << swaps << endl;

    return 0;
}
