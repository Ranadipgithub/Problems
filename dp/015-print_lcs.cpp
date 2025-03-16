// problem statement:
// Given two strings, find the longest common subsequence of them.
// Example:
// Input: s1 = "abcde", s2 = "ace"
// Output: "ace"
// solution:
// The idea is to find the longest common subsequence of the given strings. We can do this by using dynamic programming.
// the logic is as follows:
// if the characters of the strings are equal then we will add the character to the result and move to the next character of both the strings.
// if the characters of the strings are not equal then we will move to the next character of the string which has the maximum length of the longest common subsequence.
// The code is as follows:

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.size();
    int m = s2.size();
    vector<vector<int>> dp;
    dp.resize(n + 1, vector<int>(m + 1, 0));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (s1[i - 1] == s2[j - 1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    int i = n, j = m;
    string res;
    while (i > 0 && j > 0)
    {
        if (s1[i - 1] == s2[j - 1])
        {
            res.push_back(s1[i - 1]);
            i--;
            j--;
        }
        else if (dp[i - 1][j] > dp[i][j - 1])
            i--;
        else
            j--;
    }
    reverse(res.begin(), res.end());
    cout << res;
}
