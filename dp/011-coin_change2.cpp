// Problem Statement:
// Given a set of coins and a target sum, find the minimum no of coins required to make the target sum using the coins.
// Input: coins[] = {1, 2, 3}, sum = 5
// Output: 2 ({3, 2})
// Procedure:
// 1. We will create a dp array of size n+1 and sum+1.
// 2. Initialize the first row with INT_MAX-1 and the first column with 0.
// 3. Traverse the dp array and fill the dp array with the following conditions:
//     a. if the current element is greater than the sum then dp[i][j] = dp[i-1][j]
//     b. if the current element is less than or equal to the sum then dp[i][j] = min(dp[i][j-coins[i-1]] + 1, dp[i-1][j])
// 4. The answer will be stored in dp[n][sum].
// 5. Return the answer.

#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> coins = {1, 2, 3};
    int sum = 5;
    int n = coins.size();
    int count = 0;
    vector<vector<int>> dp(n+1, vector<int>(sum+1, 0));
    for(int i = 0;i<=sum;i++){
        dp[0][i] = INT_MAX-1;
    }
    for(int i = 1;i<=sum;i++){
        if(i%coins[0] == 0){
            dp[1][i] = i/coins[0];
        }
        else{
            dp[1][i] = INT_MAX-1;
        }
    }
    for(int i = 2;i<=n;i++){
        for(int j = 1;j<=sum;j++){
            if(coins[i-1] > j){
                dp[i][j] = dp[i-1][j];
            }
            else{
                dp[i][j] = min(dp[i][j-coins[i-1]] + 1, dp[i-1][j]);
            }
        }
    }
    cout<<dp[n][sum]<<endl;
}