// problem statement
// Given a string, find the minimum number of insertions needed to make it a palindrome.
// Example
// Input: s1 = "abc"
// Output: 2
// explanation: "abc" -> "abcba"
// solution
// The idea is to find the minimum number of insertions needed to make the given string a palindrome. We can do this by using dynamic programming.
// the logic is as follows:
// if the characters of the strings are equal then we will add the character to the result and move to the next character of both the strings.
// if the characters of the strings are not equal then we will move to the next character of the string which has the maximum length of the longest common subsequence.
// The code is as follows:

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1;
    cin >> s1;
    int n = s1.length();
    string s2 = s1;
    reverse(s2.begin(), s2.end());
    vector<vector<int>> dp(n+1, vector<int>(n+1, 0));
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            if(s1[i-1] == s2[j-1]) dp[i][j] = 1 + dp[i-1][j-1];
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    cout << n - dp[n][n];
}