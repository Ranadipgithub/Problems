#include<bits/stdc++.h>
using namespace std;

int main(){
    int wt[] = {1, 3, 4, 5};
    int val[] = {1, 4, 1, 7};
    int n = sizeof(wt)/sizeof(wt[0]);
    int W = 7;
    vector<vector<int>> dp(n+1, vector<int>(W+1, 0));
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= W; j++){
            if(i == 0 || j == 0) dp[i][j] = 0;
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= W; j++){
            if(wt[i-1] > j) dp[i][j] = dp[i-1][j];
            else dp[i][j] = max(val[i-1] + dp[i][j-wt[i-1]], dp[i-1][j]);
        }
    }
    cout << dp[n][W];
}