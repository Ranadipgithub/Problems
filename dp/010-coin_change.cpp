// Problem Statement:
// Given a set of coins and a target sum, find the maximum no of ways to make the target sum using the coins.
// Input: coins[] = {1, 2, 3}, sum = 5
// Output: 4
// There are five ways to make change for 5 cents
// {1, 1, 1, 1, 1}
// {1, 1, 1, 2}
// {1, 2, 2}
// {1, 1, 3}
// {2, 3}

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> coins = {1, 2, 3};
    int sum = 5;
    int n = coins.size();
    vector<vector<int>> dp(n+1, vector<int>(sum+1, 0));
    for(int i = 0;i<=n;i++){
        dp[i][0] = 1;
    }
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=sum;j++){
            if(coins[i-1] <= j){
                dp[i][j] = dp[i][j-coins[i-1]] + dp[i-1][j];
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    cout<<dp[n][sum]<<endl;
    return 0;
}