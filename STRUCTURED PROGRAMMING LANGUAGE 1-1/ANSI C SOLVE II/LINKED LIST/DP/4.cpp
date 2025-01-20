#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Function to find the length of the longest palindromic subsequence
// of substring `X[i…j]`
int findLongestPalindrome(string X, int i, int j)
{
    // Base condition
    if (i > j)
    {
        return 0;
    }

    // If the string `X` has only one character, it is a palindrome
    if (i == j)
    {
        return 1;
    }

    // If the last character of the string is the same as the first character,
    if (X[i] == X[j])
    {
        // include the first and last characters in palindrome
        // and recur for the remaining substring `X[i+1, j-1]`
        return findLongestPalindrome(X, i + 1, j - 1) + 2;
    }

    /*
      If the last character of the string is different from the first character
        1. Remove the last character and recur for the remaining substring
           `X[i, j-1]`
        2. Remove the first character and recur for the remaining substring
           `X[i+1, j]`
    */

    // Return the maximum of the two values
    return max(findLongestPalindrome(X, i, j - 1), findLongestPalindrome(X, i + 1, j));
}

int main()
{
    string X = "ABGB";
    int n = X.length();

    cout << "The length of the longest palindromic subsequence is "<< findLongestPalindrome(X, 0, n - 1);

    return 0;
}