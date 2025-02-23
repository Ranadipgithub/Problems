// Problem statement
// https://leetcode.com/problems/2-keys-keyboard/description/
    // There is only one character 'A' on the screen of a notepad. You can perform one of two operations on this notepad for each step:

    // Copy All: You can copy all the characters present on the screen (a partial copy is not allowed).
    // Paste: You can paste the characters which are copied last time.
    // Given an integer n, return the minimum number of operations to get the character 'A' exactly n times on the screen.

    // Example 1:

    // Input: n = 3
    // Output: 3
    // Explanation: Initially, we have one character 'A'.
    // In step 1, we use Copy All operation.
    // In step 2, we use Paste operation to get 'AA'.
    // In step 3, we use Paste operation to get 'AAA'.
    // Example 2:

    // Input: n = 1
    // Output: 0

// #include<bits/stdc++.h>
// using namespace std;

// vector<vector<int>> dp(1001, vector<int>(1001, -1));

// int solve(int n, int currA, int clip, int count) {
//     if(currA > n) return INT_MAX;
//     if(currA == n) return count;
//     if(dp[currA][clip] != -1) return dp[currA][clip];
//     return dp[currA][clip] = min(solve(n, currA + clip, clip, count + 1), solve(n, currA * 2, currA, count + 2));
// }

// int main() {
//     int n;
//     cin >> n;
//     int currA = 1;
//     int clip = 1;
//     int count = 0;
//     cout << solve(n, currA, clip, count) << endl;
//     return 0;
// }

// optimal solution
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> dp(n + 1, 0);
    dp[0] = 0;
    dp[1] = 0;
    dp[2] = 2;
    for (int i = 3; i <= n; i++)
    {
        int factor = i / 2;
        while(factor > 0){
            if(i % factor == 0){
                int steps = dp[factor];
                int copy = 1;
                int paste = (i / factor) - 1;
                dp[i] = steps + copy + paste;
                break;
            }
            else factor--;
        }
    }
    cout << dp[n] << endl;
}