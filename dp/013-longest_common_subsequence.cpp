// Problems
// Longest common substring
// Print LCS
// Shortest common supersequence
// Print SCS
// Minimum number of insertions and deletions to convert string a to b
// Longest repeating subsequence
// length of longest subsequence of a string that is a substring of b
// subsequence pattern matching
// count how many times a string appears as a subsequence in another string
// longest palindromic subsequence
// longest palindromic substring
// count of palindromic substrings
// minimum number of deletions to make a string palindrome
// minimum number of insertions to make a string palindrome

// Longest common subsequences
// Given two strings a and b, find the length of the longest common subsequence of the two strings.
// A subsequence is a sequence that can be derived from another sequence by deleting some or no elements without changing the order of the remaining elements.
// Example 1:
// Input: a = "abcde", b = "ace"
// Output: 3
// Explanation: The longest common subsequence is "ace".
// Procedure:
// 1. If the last characters of both strings are the same, then we will reduce the length of both strings by 1 and add 1 to the length of the common subsequence.
// 2. If the last characters of both strings are not the same, then we will reduce the length of the first string by 1 or the length of the second string by 1 and take the maximum of the two.
// 3. We will use a 2D dp array to store the length of the common subsequence of the two strings.
// 4. The dp array will have a size of (n + 1) x (m + 1) where n is the length of the first string and m is the length of the second string.
// 5. The dp array will be initialized with 0.
// 6. We will iterate over the two strings and fill the dp array using the above procedure.
// 7. The answer will be stored in dp[n][m].
// Time complexity: O(n * m)
// Space complexity: O(n * m)

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> dp;

int solve(string &s1, string &s2, int n, int m){
    if(n == 0 || m == 0) return 0;
    if(dp[n][m] != -1) return dp[n][m];
    if(s1[n-1] == s2[m-1]) return dp[n][m] = 1 + solve(s1, s2, n-1, m-1);
    return dp[n][m] = max(solve(s1, s2, n-1, m), solve(s1, s2, n, m-1));
}

int main(){
    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.size();
    int m = s2.size();
    dp.resize(n + 1, vector<int>(m + 1, -1));
    cout << solve(s1, s2, n, m) << endl;
}

