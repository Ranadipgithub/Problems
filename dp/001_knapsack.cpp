// 0-1 Knapsack
// Input: W = 4, val[] = {1, 2, 3}, weight[] = {4, 5, 1}
// Here we have to find maxProfit that is we need optimal => 1st condition for dp
// We have to choose the item either 0 or 1 => 2nd condition for dp

// Recursive Solution
// For base condition think of smallest valid input for the problem the smallest valid input is n == 0 or weight == 0
// Now think what will be the ans for this base condition for the problem if the weight is 0 then maxProfit will be 0
// Therefore the base condition is when 
// if(n == 0 || w == 0) return 0;
// for each item if the weight of the item is less than the weight of the bag then we can either take the item or not
// take it but if the weight of the item is greater than the wright of the bag when we will surely not take it
// #include<bits/stdc++.h>
// using namespace std;

// int knapSack(int W, int wt[], int val[], int n){
//     if(n == 0 || W == 0) return 0;
//     if(wt[n-1] > W) return knapSack(W, wt, val, n-1);
//     else return max(val[n-1] + knapSack(W-wt[n-1], wt, val, n-1), knapSack(W, wt, val, n-1));
// }

// int main(){
//     int wt[] = {1, 3, 4, 5};
//     int val[] = {1, 4, 5, 7};
//     int n = sizeof(wt)/sizeof(wt[0]);
//     int W = 7;
//     cout << knapSack(W, wt, val, n);
// }


// Memoization of recursive solution
// Weight and n are changing in the recursive solution so the matrix will be formed with the two variables only that are 
// changing
// The matrix will be of size (n+1) * (W+1)
// Initialize the matrix el with -1, memset(matrix, -1, sizeof(matrix));
// If the value is already calculated then return the value else calculate the value and store it in the matrix

// #include<bits/stdc++.h>
// using namespace std;

// int knapSack(int W, int wt[], int val[], int n, vector<vector<int>>& dp) {
//     if (n == 0 || W == 0) return 0;
//     if (dp[n][W] != -1) return dp[n][W];
//     if (wt[n-1] > W) return dp[n][W] = knapSack(W, wt, val, n-1, dp);
//     else return dp[n][W] = max(val[n-1] + knapSack(W-wt[n-1], wt, val, n-1, dp), knapSack(W, wt, val, n-1, dp));
// }

// int main() {
//     int wt[] = {1, 3, 4, 5};
//     int val[] = {1, 4, 5, 7};
//     int n = sizeof(wt)/sizeof(wt[0]);
//     int W = 7;
//     vector<vector<int>> dp(n+1, vector<int>(W+1, -1));
//     cout << knapSack(W, wt, val, n, dp);
// }


// Top-down approach
// In this approach we omit the recursion completely and use only the matrix. Here there is no chances of stack overflow as in prev 2 approaches.
// The matrix will be of size (n+1) * (W+1)[ n and W are the ones whos values are changing in the recursive calls]
// Each cell of the matrix tells us the maximum profit that can be obtained within the cell's rows and columns. The ans will be stored in the last cell of the matrix.
// Recursion base condition -> Initialization in DP
// Base condition if n == 0 || W == 0 return 0 so we will initialize the first row and first column of the matrix with 0
// for(int i = 0; i <= n; i++){
//     for(int j = 0; j <= W; j++){
//         if(i == 0 || j == 0) dp[i][j] = 0;
//     }
// }
// Fill the matrix elements using the recursive relation
// for(int i = 1; i <= n; i++){
//     for(int j = 1; j <= W; j++){
//         if(wt[i-1] > j) dp[i][j] = dp[i-1][j];
//         else dp[i][j] = max(val[i-1] + dp[i-1][j-wt[i-1]], dp[i-1][j]);
//     }
// }
// Return the last element of the matrix

// Knapsack pattern: a array and a max val will be given and there will be choices to select the arr el 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int wt[] = {1, 3, 4, 5};
    int val[] = {1, 4, 5, 7};
    int n = sizeof(wt)/sizeof(wt[0]);
    int W = 7;
    vector<vector<int>> dp(n+1, vector<int>(W+1, 0));
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= W; j++){
            if(i == 0 || j == 0) dp[i][j] = 0;
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= W; j++){
            if(wt[i-1] > j) dp[i][j] = dp[i-1][j];
            else dp[i][j] = max(val[i-1] + dp[i-1][j-wt[i-1]], dp[i-1][j]);
        }
    }
    cout << dp[n][W];
}