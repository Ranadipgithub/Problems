// Problem statement
// Given two strings, find if the first string is a subsequence of the second string.
// Example
// Input: s1 = "abc", s2 = "ahbgdc"
// Output: true
// solution
// The idea is to find if the first string is a subsequence of the second string. We can do this by using dynamic programming.
// the logic is as follows:
// if the characters of the strings are equal then we will add the character to the result and move to the next character of both the strings.
// if the characters of the strings are not equal then we will move to the next character of the string which has the maximum length of the longest common subsequence.
// The code is as follows:

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.size();
    int m = s2.size();
    vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=m;j++){
            if(s1[i-1] == s2[j-1]) dp[i][j] = 1 + dp[i-1][j-1];
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    if(dp[n][m] == n) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}