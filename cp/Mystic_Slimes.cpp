#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int ans = 0;
        for(int i = 0;i<n;i++){
            int left;
            int right;
            if(i!=1){
                left = 0;
            } else{
                left = arr[0];
            }
            if(i!=n-1){
                right = 0;
            } else{
                right = arr[n-1];
            }
            ans = max(ans, arr[i] - (left+right));
        }
        cout<< ans << endl;
    }
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// int solve(vector<int>& A) {
//     int n = A.size();
//     vector<vector<int>> dp(n, vector<int>(n, 0));
    
//     for (int i = 0; i < n; ++i)
//         dp[i][i] = A[i];
    
//     for (int len = 2; len <= n; ++len) {
//         for (int l = 0; l + len <= n; ++l) {
//             int r = l + len - 1;
//             dp[l][r] = 0;
//             for (int k = l; k < r; ++k) {
//                 int left = dp[l][k];
//                 int right = dp[k+1][r];
//                 int val1 = max(left - right, 0);
//                 int val2 = max(right - left, 0);
//                 dp[l][r] = max(dp[l][r], max(val1, val2));
//             }
//         }
//     }
//     return dp[0][n-1];
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     int T;
//     cin >> T;
//     while (T--) {
//         int N;
//         cin >> N;
//         vector<int> A(N);
//         for (int i = 0; i < N; ++i)
//             cin >> A[i];
//         cout << solve(A) << '\n';
//     }
    
//     return 0;
// }


