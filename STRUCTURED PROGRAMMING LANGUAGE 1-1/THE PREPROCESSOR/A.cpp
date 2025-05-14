#include <bits\stdc++.h>
using namespace std;

int power(int x, int y)
{
    int p = y;
    while (y > 0)

        x *= y--;
    return x;
}

void testPowerFunction()
{
    // Test cases
    int testCases[5][2] = {
        {2, 3},  // 2^3 = 8
        {0, 5},  // 0^5 = 0
        {5, 0},  // 5^0 = 1
        {4, -2}, // invalid input, expecting 1
        {-3, 4}  // (-3)^4 = 81
    };

    int expectedResults[] = {8, 0, 1, 1, 81};
    int numTestCases = sizeof(testCases) / sizeof(testCases[0]);

    // Run the test cases
    for (int i = 0; i < numTestCases; i++)
    {
        int x = testCases[i][0];
        int y = testCases[i][1];
        int result = power(x, y);

        cout << "Test Case " << i + 1 << ": ";
        if (result == expectedResults[i])
        {
            cout << "Passed" << endl;
        }
        else
        {
            cout << "Failed" << endl;
            cout << "Expected: " << expectedResults[i] << ", Got: " << result << endl;
        }
    }
}

int main()
{
    testPowerFunction();
    return 0;
}