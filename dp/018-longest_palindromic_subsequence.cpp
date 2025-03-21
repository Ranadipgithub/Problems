// Problem statement: 
// Given a string, find the length of the longest palindromic subsequence in it.
// Example:
// Input: "bbbab"
// Output: 4
// Explanation: One possible longest palindromic subsequence is "bbbb". 
// solution:
// The idea is to find the longest palindromic subsequence in the given string. We can do this by finding the longest common subsequence of the given string and its reverse.
// The longest common subsequence of the given string and its reverse will be the longest palindromic subsequence of the given string.  
// The code is as follows:

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1;
    cin >> s1;

    int n = s1.size();
    string s2 = s1;
    reverse(s2.begin(), s2.end());

    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (s1[i - 1] == s2[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    cout << dp[n][n] << endl;
    return 0;
}
