// problem statement
// given an array of integers and a sum, you have to count the number of subsets whose sum is equal to the given sum.
// Input: arr[] = {2, 3, 5, 6, 8, 10}
// sum = 10
// Output: 3 ({2, 3, 5}, {2, 8}, {10})
// Procedure:
// 1. Create a dp array of size n+1 * sum+1
// 2. Initialize the first row with 1(with sum = 0 there is only one subsest that is empty subset) and the first column with 0
// 3. Traverse the dp array and fill the dp array with the following conditions:
//     a. if the current element is greater than the sum then dp[i][j] = dp[i-1][j]
//     b. if the current element is less than or equal to the sum then dp[i][j] = dp[i-1][j] + dp[i-1][j-el]


#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum;
    cin>>sum;
    vector<vector<int>> dp(n+1, vector<int>(sum+1, 0));
    for(int i = 0;i<n;i++){
        dp[i][0] = 1;
    }
    for(int i = 1;i<=n;i++){
        for(int j = 0; j<= sum;j++){
            if(arr[i-1] > j) dp[i][j] = dp[i-1][j];
            else dp[i][j] = dp[i-1][j-arr[i-1]] + dp[i-1][j];
        }
    }
    cout<<dp[n][sum];
    return 0;
}