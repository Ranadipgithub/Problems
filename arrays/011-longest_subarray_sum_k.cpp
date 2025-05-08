// Problem statement: Longest Subarray with Sum K
// https://www.geeksforgeeks.org/longest-subarray-sum-k/
// Given an array of integers and an integer k, find the length of the longest subarray with sum equal to k. If there is no such subarray, return 0.
//
// Example 1:
// Input: nums = [1, -1, 5, -2, 3], k = 3
// Output: 4
// Explanation: The subarray [1, -1, 5, -2] has a sum of 3 and its length is 4.

#include <bits/stdc++.h>
using namespace std;

// optimal for +ve, -ve and zeros
int solve(vector<int>& arr, int n, int k) {
    unordered_map<int, int> mpp;
    int sum = 0;
    int maxLen = 0;
    for(int i = 0;i<n;i++){
        sum += arr[i];
        if(sum == k){
            maxLen = i + 1;
        }
        if(mpp.find(sum - k) != mpp.end()){
            maxLen = max(maxLen, i - mpp[sum-k]);
        }
        if(mpp.find(sum) == mpp.end()){
            mpp[sum] = i;
        }
    }
    return maxLen;
}

// optimal for +ve and zeros
int solve1(vector<int>& arr, int n, int k) {
    int sum = 0, maxLen = 0;
    int left = 0, right = 0;
    while(right < n){
        sum += arr[right];
        while(sum > k){
            sum -= arr[left];
            left++;
        }
        if(sum == k){
            maxLen = max(maxLen, right - left + 1);
        }
        right++;
    }
    return maxLen;
}


int main(){
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    cout << solve(arr, n, k) << endl;
    return 0;
}