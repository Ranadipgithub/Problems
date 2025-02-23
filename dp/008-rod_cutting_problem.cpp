// Problem Statement
// Given a rod of length n inches and an array of prices that contains prices of all pieces of size smaller than n. 
// Determine the maximum value obtainable by cutting up the rod and selling the pieces.
// Example
// n = 8
// prices[] = {1, 5, 8, 9, 10, 17, 17, 20}
// The rod can be cut in many ways. The maximum obtainable value is 22 (by cutting in two pieces of lengths 2 and 6)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> prices(n);
    for(int i = 0; i < n; i++) cin >> prices[i];
    vector<int> length(n);
    for(int i = 0; i < n; i++) length[i] = i+1;
    vector<vector<int>> dp(n+1, vector<int>(n+1, 0));
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= n; j++){
            if(i == 0 || j == 0) dp[i][j] = 0;
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(length[i-1] <= j) dp[i][j] = max(prices[i-1] + dp[i][j-length[i-1]], dp[i-1][j]);
            else dp[i][j] = dp[i-1][j];
        }
    }
    cout << dp[n][n];
}