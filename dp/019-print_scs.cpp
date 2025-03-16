// Problem statement:
// Given two strings, find the shortest common supersequence of them.
// Example:
// Input: s1 = "abac", s2 = "cab"
// Output: "cabac"

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.size();
    int m = s2.size();
    vector<vector<int>> dp;
    dp.resize(n+1, vector<int>(m+1, 0));
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=m;j++){
            if(s1[i-1] == s2[j-1]) dp[i][j] = 1 + dp[i-1][j-1];
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    int i = n, j = m;
    string res = "";
    while(i>0 && j>0){
        if(s1[i-1] == s2[j-1]){
            res.push_back(s1[i-1]);
            i--;
            j--;
        } else if(dp[i-1][j] > dp[i][j-1]){
            res.push_back(s1[i-1]);
            i--;
        } else {
            res.push_back(s2[j-1]);
            j--;
        }
    }
    while(i>0){
        res.push_back(s1[i-1]);
        i--;
    }
    while(j>0){
        res.push_back(s2[j-1]);
        j--;
    }
    reverse(res.begin(), res.end());
    cout << res << endl;
}