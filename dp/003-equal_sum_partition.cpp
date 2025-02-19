// probleam statement
// Given a set of non-negative integers, you have to determine if the set can be divided into two subsets such that the sum of elements in both subsets is equal.
// Input: set[] = {1, 5, 11, 5}
// Output: True
// The set can be divided into two subsets {1, 5, 5} and {11} with equal sum

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum += arr[i];
    }
    if(sum % 2 != 0){
        cout<<false;
        return 0;
    }
    sum /= 2;
    vector<vector<bool>> dp(n+1, vector<bool>(sum+1, false));
    for(int i = 0;i<=n;i++){
        for(int j = 0;j<=sum;j++){
            if(i == 0) dp[i][j] = false;
            if(j == 0) dp[i][j] = true;
        }
    }
    for(int i = 1;i<=n;i++){
        for(int j = 1; j<= sum; j++){
            if(arr[i-1] > j) dp[i][j] = dp[i-1][j];
            else dp[i][j] = dp[i-1][j - arr[i-1]] || dp[i-1][j];
        }
    }
    cout<<dp[n][sum];
}