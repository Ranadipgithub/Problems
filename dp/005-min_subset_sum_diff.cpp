// Problem Statement
// Given an arry of non-negative integers, you have to find the minimum difference between two subsets of the array.
// Input: arr[] = {1, 2, 7}
// Output: 4
// Explanation: The minimum difference between two subsets is 4. The two subsets are {1, 2} and {7}
// Procedure:
// 1. Create a dp array of size n+1 * sum+1
// 2. Initialize the first row with true(with sum = 0 there is only one subsest that is empty subset) and the first column with false
// 3. Traverse the dp array and fill the dp array with the following conditions:
//     a. if the current element is greater than the sum then dp[i][j] = dp[i-1][j]
//     b. if the current element is less than or equal to the sum then dp[i][j] = dp[i-1][j] || dp[i-1][j-arr[i-1]]
// 4. Find the subset sum array by traversing the last row of the dp array and store the sum in a vector
// 5. Find the minimum difference between the sum and 2*subset_sum[i] for all i in the subset sum array
// 6. Print the minimum difference


#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int sum = accumulate(arr, arr+n, 0);
    int target = sum / 2;
    vector<vector<bool>> dp(n+1, vector<bool>(target+1, false));
    for(int i = 0;i<=n;i++){
        dp[i][0] = true;
    }
    
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=target;j++){
            if(arr[i-1] > j) dp[i][j] = dp[i-1][j];
            else dp[i][j] = dp[i-1][j] || dp[i-1][j-arr[i-1]];
        }
    }

    vector<int> v;
    for(int i = 0;i<=target;i++){
        if(dp[n][i]) v.push_back(i);
    }

    int ans = INT_MAX;
    for(int i = 0;i<v.size();i++){
        ans = min(ans, sum - 2*v[i]);
    }
    cout<<ans<<endl;
}