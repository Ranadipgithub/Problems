// Problem statement
// Given a set of non-negative integers, and a value sum, determine if there is a subset of the given set with sum equal to given sum
// Input: set[] = {3, 34, 4, 12, 5, 2}, sum = 9
// Output: True  
// There is a subset (4, 5) with sum 9.
// Creating the subset sum table(matrix initialization)
// First we will create a matrix of size (n+1) * (sum+1) where n is the size of the array and sum is the target sum.
// Now we will initialize the first row and first column of the matrix
// {0,0}: when n = 0 and sum = 0 True as we can take an empty subset
// {0,1}: when n = 0 and sum = 1 False as with no elements we cannot reach the target sum
// {0,2}: Same
// {1,0}: when n = 1 and sum = 0 True as we can take an empty subset
// {2,0}: when n = 2 and sum = 0 True as we can take an empty subset
// for(int i = 0; i <= n; i++){
//     for(int j = 0; j <= sum; j++){
//         if(i == 0) dp[i][j] = false;
//         if(j == 0) dp[i][j] = true;
//     }
// }

// el > sum: dp[i][j] = dp[i-1][j](we will not include the current element)
// el <= sum: dp[i][j] = dp[i-1][j] || dp[i-1][j-el](we can include the current element)
// return dp[n][sum]

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int sum;
    cin>>sum;
    vector<vector<bool>> dp(n+1, vector<bool>(sum+1, false));
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= sum; j++){
            if(i == 0) dp[i][j] = false;
            if(j == 0) dp[i][j] = true;
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= sum; j++){
            if(arr[i-1] > j) dp[i][j] = dp[i-1][j];
            else dp[i][j] = dp[i-1][j] || dp[i-1][j-arr[i-1]];
        }
    }
    cout<<dp[n][sum];
}