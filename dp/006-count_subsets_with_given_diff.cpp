// Problem Statement
// Given an array of non-negative integers and a difference, you have to divide the array into two subsets such that
// the difference between the sum of the two subsets is equal to the given difference.
// Input: arr[] = {1, 1, 2, 3}, diff = 1
// Output: 3 (The three subsets are {1, 1, 2} and {3}, {1, 2} and {1, 3}, {1, 3} and {1, 2})
// Procedure:
// 1. Find the sum of the array
// 2. Find the target sum by the formula (sum - diff) / 2
// 3. Count the number of subsets with the given sum
// 4. Print the count

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int diff;
    cin >> diff;
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum += arr[i];
    }
    int target = (sum - diff) / 2;
    vector<vector<int>> dp(n+1, vector<int>(target+1,0));
    for(int i = 0;i<=n;i++){
        dp[i][0] = 1;
    }
    for(int i = 1;i<=n;i++){
        for(int j = 0;j<=target;j++){
            if(arr[i-1] > j) dp[i][j] = dp[i-1][j];
            else dp[i][j] = dp[i-1][j] + dp[i-1][j-arr[i-1]];
        }
    }
    cout<<dp[n][target]<<endl;
}