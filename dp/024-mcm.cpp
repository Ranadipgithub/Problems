// Problem statement: Matrix Chain Multiplication
// Given a sequence of matrices, find the most efficient way to multiply these matrices together.
// Example:
// Input: arr = {40, 20, 30, 10, 30}
// Output: 26000
// Explanation: There are 4 matrices of dimensions 40x20, 20x30, 30x10 and 10x30. Let the input 4 matrices be A, B, C and D. The most efficient way is (A(BC))D. The number of operations are 20*30*10 + 40*20*10 + 40*10*30 = 26000.
// No of multiplications: (40*20)*(20*30) => 40*20*30

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> dp;

int solve(vector<int> &arr, int i, int j){
    if(i>=j) return 0; // as we need atleast two matrices to multiply(i>j => 0 matrices, i = j => 1 matrix)
    int ans = INT_MAX;
    if(dp[i][j] != -1) return dp[i][j];
    for(int k = i;k<=j-1;k++){
        int temp = solve(arr, i, k) + solve(arr, k+1, j) + arr[i-1]*arr[k]*arr[j];
        ans = min(ans, temp);
    }
    return dp[i][j] = ans;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    dp.resize(n, vector<int>(n, -1));
    int ans = solve(arr, 1, n-1);
    cout << ans << endl;
    return 0;
}