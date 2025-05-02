/*
1. Define a function lps(str, i, j) to find the longest palindromic subsequence in the substring str[i...j].

2. If i > j, return 0.

3. If i == j, return 1.

4. If str[i] == str[j], Return 2 added to the result of lps(str, i + 1, j - 1).

5. If str[i] != str[j],
   - Exclude character at position i: Return the result of lps(str, i + 1, j).
   - Exclude character at position j: Return the result of lps(str, i, j - 1).
   Return the maximum of these two options.

6.  Print "LPS : " followed by the result of lps(str, 0, str.length() - 1).

7. End of the algorithm.
*/