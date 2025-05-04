#include <iostream>
#include <vector>
#include <string>
using namespace std;

// A function to fill the DP table iteratively
vector<vector<int>> fillDP(string str1, string str2) {
    int len1 = str1.length(), len2 = str2.length();
    vector<vector<int>> dp(len1 + 1, vector<int>(len2 + 1, 0));

    for (int i = 1; i <= len1; ++i) {
        for (int j = 1; j <= len2; ++j) {
            if (str1[i - 1] == str2[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    return dp;
}

// Function to print all LCSs
void printAllLCS(vector<vector<int>>& dp, string str1, string str2, int len1, int len2) {
    vector<string> lcs; // Store LCSs
    vector<pair<int, int>> stack; // Stack to backtrack

    stack.push_back({len1, len2});
    while (!stack.empty()) {
        int i = stack.back().first;
        int j = stack.back().second;
        stack.pop_back();

        if (i == 0 || j == 0) {
            string temp;
            for (int k = lcs.size() - 1; k >= 0; --k)
                temp += lcs[k];
            cout << temp << endl;
            continue;
        }

        if (str1[i - 1] == str2[j - 1]) {
            lcs.push_back(string(1, str1[i - 1]));
            stack.push_back({i - 1, j - 1});
        } else {
            if (dp[i - 1][j] >= dp[i][j - 1])
                stack.push_back({i - 1, j});
            if (dp[i][j - 1] >= dp[i - 1][j])
                stack.push_back({i, j - 1});
        }
    }
}

// Main function
int main() {
    string str1 = "btat", str2 = "atta";
    vector<vector<int>> dp = fillDP(str1, str2);
    printAllLCS(dp, str1, str2, str1.length(), str2.length());
    return 0;
}
