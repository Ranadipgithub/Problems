// You are given an array of binary strings strs and two integers m and n.
// Return the size of the largest subset of strs such that there are at most m 0's and n 1's in the subset.
// A set x is a subset of a set y if all elements of x are also elements of y.

// Recursive Solution

// #include<bits/stdc++.h>
// using namespace std;

// int solve(vector<string> &strs, int m, int n, int s){
//     if(s == 0) return 0;

//     int zeros = count(strs[s-1].begin(), strs[s-1].end(), '0');
//     int ones = count(strs[s-1].begin(), strs[s-1].end(), '1');

//     if(zeros > m || ones > n) return solve(strs, m, n, s-1);
//     return max(1 + solve(strs, m-zeros, n-ones, s-1), solve(strs, m, n, s-1));
// }

// int main(){
//     vector<string> strs = {"10", "0001", "111001", "1", "0"};
//     int s = strs.size();
//     int ans = solve(strs, 5, 3, s);
//     cout << ans;
// }


// DP solution

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string> strs = {"10", "0001", "111001", "1", "0"};
    int s = strs.size();
    int m = 5, n = 3;
    vector<vector<int>> dp(m+1, vector<int>(n+1, 0));
    for(int i=1; i<=s; i++){
        int zeros = count(strs[i-1].begin(), strs[i-1].end(), '0');
        int ones = count(strs[i-1].begin(), strs[i-1].end(), '1');
        for(int j=m; j>=zeros; j--){
            for(int k=n; k>=ones; k--){
                dp[j][k] = max(1 + dp[j-zeros][k-ones], dp[j][k]);
            }
        }
    }
    cout << dp[m][n];
}