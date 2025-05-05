if (i < 0 && j < 0)
    return true;
if (i < 0 && j >= 0)
    return false;
if (j < 0 && i >= 0)
{
    for (int k = 0; k <= i; k++)
    {
        if (pattern[k] != '*')
            return false;
    }
    return true;
}
if (dp[i][j] != 0)
    return dp[i][j];

if (pattern[i] == '?' || pattern[i] == text[j])
    dp[i][j] = isMatch(i - 1, j - 1, pattern, text, dp);
else if (pattern[i] == '*')

    dp[i][j] = isMatch(i - 1, j, pattern, text, dp) 
    || isMatch(i, j - 1, pattern, text, dp);
else
    dp[i][j] = 0;
return dp[i][j];